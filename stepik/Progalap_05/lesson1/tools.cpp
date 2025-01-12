#include <cstdio>
#include <iostream>

using namespace std;

FILE* fp_read;
FILE* fp_write;
FILE* fp_error;

int stdin_backup;
int stdout_backup;
int stderr_backup;

#if defined(__linux__)
#define PLATFORM 1
#elif defined(__MINGW32__)
#define PLATFORM 2
#else
#define PLATFORM 3
#endif

/**
 * <h2>szoveg:</h2>
 * a feladathoz tartozó input (ezt fogja a hallgató beolvasni)
 * <br><br>
 * <h2>result:</h2>
 * az utasítás, amely tartalmazza a függvényhívást (pl. eltárolhatjuk a visszaadott értéket)
 * <br><br>
 * <h2>Példa:</h2>
 *   BEOLVAS("10", int res = beolvas(2, 7)) <br>
 *   ASSERT_EQ(19, res);
 *
 */
#define BEOLVAS(szoveg, result) \
    FILE* f = fopen("tmp.txt", "w"); \
    fprintf(f, "%s\n", szoveg); \
    fclose(f); \
    stdin_backup = dup(fileno(stdin)); \
    fp_read = fopen("tmp.txt", "r"); \
    dup2(fileno(fp_read), fileno(stdin)); \
    result; \
    /*fclose(fp_read);*/ \
    dup2(stdin_backup, fileno(stdin)); \

/**
 * <h2>fuggvenyhivas:</h2>
 * a hallgató által megírt függvény, amiben kiír valamit a képernyőre
 * <br><br>
 * <h2>visszaadott fájl: </h2> file
 * <br><br>
 * <h2>Példa: </h2>
 *   KIIR(fgv(5, 7)) <br>
 *   fscanf(file, "%s", result); <br>
 *   ASSERT_STREQ("MACSKA", result); <br>
 */
#define KIIR(fuggvenyhivas) \
        stdout_backup = dup(fileno(stdout)); \
        fp_write = fopen("tmp.txt", "w"); \
        dup2(fileno(fp_write), fileno(stdout)); \
        fuggvenyhivas; \
        fflush(stdout); \
        fflush(fp_write); \
        fclose(fp_write); \
        dup2(stdout_backup, fileno(stdout)); \
        FILE* file = fopen("tmp.txt", "r");

#define IO(szoveg, fuggvenyhivas, string) \
    fflush(stdout); \
    fflush(stderr); \
    fflush(stdin); \
    FILE* f = fopen("input.txt", "w"); \
    fprintf(f, "%s\n", szoveg); \
    fclose(f); \
    stdin_backup = dup(fileno(stdin)); \
    fp_read = fopen("input.txt", "r"); \
    dup2(fileno(fp_read), fileno(stdin)); \
    stdout_backup = dup(fileno(stdout)); \
    fp_write = fopen("output.txt", "w"); \
    dup2(fileno(fp_write), fileno(stdout)); \
    stderr_backup = dup(fileno(stderr)); \
    fp_error = fopen("error.txt", "w"); \
    dup2(fileno(fp_error), fileno(stderr)); \
    fuggvenyhivas; \
    fflush(stdout); \
    fflush(fp_write); \
    fflush(stderr); \
    fflush(fp_error); \
    fclose(fp_write); \
    fclose(fp_error); \
    dup2(stdout_backup, fileno(stdout)); \
    dup2(stdin_backup, fileno(stdin)); \
    dup2(stderr_backup, fileno(stderr)); \
    FILE* file = fopen("output.txt", "r"); \
    readstring(file, string); \
    fclose(file); \
    FILE* error_file = fopen("error.txt", "r"); \
    char error_string[1000]; \
    readstring(file, error_string); \
    fclose(error_file);

char* readstring(FILE* file, char* str) {
    if (str == nullptr) {
        do {
            fscanf(file, "%*c");
        } while (!feof(file));

        return nullptr;
    }

    int index = 0;
    do {
        fscanf(file, "%c", &str[index]);
        index++;
    } while (!feof(file));
    str[index-1] = 0;
    return str;
}

#define ASSERT_ARRAY_EQ(t1, t2, len) {\
    for (int i = 0; i < len; i++) {\
        ASSERT_EQ(t1[i], t2[i]);\
    }\
}

#define GETSOURCE(taskName, sourceName, str) {\
    char source_dest[200];\
    sprintf(source_dest, "../../../lesson1/%s/src/%s", taskName, sourceName);\
    FILE* _sourceFile = fopen(source_dest, "r");\
    int __i = 0;\
    while (!feof(_sourceFile)) {\
        fscanf(_sourceFile, "%c", &str[__i]);\
        __i++;\
    }\
    str[__i] = 0;\
    fclose(_sourceFile);\
}

#define COMPILE(taskName, sourceName, str, delete_file) {\
    char command[200];\
    \
    char compiler[4]; \
    if (string(sourceName).find("cpp") == string::npos) { \
        strcpy(compiler, "gcc"); \
    } else { \
        strcpy(compiler, "g++"); \
    } \
    \
    if (PLATFORM != 3) {\
        sprintf(command, "cd ../../../lesson1/%s/src && %s %s -Wall -c 2> compilerinfo.txt", taskName, compiler, sourceName);\
    } else {\
        sprintf(command, "cd ../../../lesson1/%s/src && %s %s -Wall -c -ferror-limit=0 2> compilerinfo.txt", taskName, compiler, sourceName);\
    }\
    \
    system(command);\
    \
    char dest[200];\
    sprintf(dest, "../../../lesson1/%s/src/compilerinfo.txt", taskName);\
    \
    char desto[200];\
    sprintf(desto, "../../../lesson1/%s/src/%s", taskName, sourceName);\
    desto[strlen(desto)-1] = 'o';\
    \
    FILE* f = fopen(dest, "r");\
    int _i = 0;\
    while (!feof(f)) {\
    fscanf(f, "%c", &str[_i]);\
    _i++;\
    }\
    str[_i] = 0;\
    fclose(f);\
    if (delete_file) {\
        remove(dest);\
        remove(desto);\
    }\
}

#define CHECK_COMPILER_ERROR_LIMIT(taskName, sourceName, errors, min_errors, delete_file) {\
    for (auto & _k: errors) {\
        if (PLATFORM == 1) {\
            while (_k.find('\'') != string::npos) {\
                _k.replace(_k.find('\''), 1, "‘");\
                _k.replace(_k.find('\''), 1, "’");\
            }\
        }\
        \
        string replace = "isn't";\
        if (PLATFORM == 1) {\
            replace = "isn’t";\
        }\
        \
        while (_k.find("isnot") != string::npos) {\
            _k.replace(_k.find("isnot"), 5, replace);\
        }\
    }\
    \
    int result = 0;\
    char _str[10000];\
    char _source[10000];\
    GETSOURCE(taskName, sourceName, _source)\
    \
    for (auto & _j: errors) {\
        if (strstr(_source, _j.c_str()) != NULL) {\
            fprintf(stderr, "Nem rossz otlet, de nem jott be!");\
            FAIL();\
        }\
    }\
    \
    COMPILE(taskName, sourceName, _str, delete_file)\
    for (auto & _j : errors) {\
        if (strstr(_str, _j.c_str()) != NULL) {\
            result++;\
            printf("[✓]");\
        } else {\
            printf("[✗]");\
        }\
        printf(" %s\n", _j.c_str());\
    }\
    \
    printf("\nMegtalalt hibak: %d/%d [min: %d]\n", result, errors.size(), min_errors);\
    \
    if (result < min_errors) {\
        FAIL();\
    }\
}

#define CHECK_COMPILER_ERROR(taskName, sourceName, errors, delete_file) {\
    CHECK_COMPILER_ERROR_LIMIT(taskName, sourceName, errors, errors.size(), delete_file);\
}

void getFileContents(const char* filename, char* result) {
    FILE* f = fopen(filename, "r");
    readstring(f, result);
    fclose(f);
}

void writeContentToFile(const char* filename, const char* str) {
    FILE* f = fopen(filename, "w");
    fprintf(f, "%s\n", str);
    fclose(f);
}

template <typename T> bool isConst(T& x) {
    return false;
}

template <typename T> bool isConst(const T& x) {
    return true;
}

int getFileSize(const char* taskName, const char* sourceName) {
    char str[10000];
    GETSOURCE(taskName, sourceName, str)
    return strlen(str);
}

void checkFileSize(const char* taskName, const char* sourceName, int maxFileSize) {
    int size = getFileSize(taskName, sourceName);

    if (size > maxFileSize) {
        fprintf(stdout, "A forraskod maximalis megengedett merete %d bajt!\n\n", maxFileSize);
        FAIL();
    }
}