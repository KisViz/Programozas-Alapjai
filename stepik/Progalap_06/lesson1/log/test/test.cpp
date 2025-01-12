#include <gtest/gtest.h>

#define main main_0
#include "../src/log.c"
#undef main

#include "../../tools.cpp"

void log(char* filename, char* text);

void call_and_test(char* file, char* text, const char* elvart, int nullaz) {
    if (nullaz) {
        FILE* f = fopen(file, "w");
        fclose(f);
    }

    char res[1000];
    log(file, text);
    getFileContents(file, res);
    ASSERT_STREQ(res, elvart);
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    call_and_test("test1.txt", "megjott a macska", "megjott a macska\n", 1);
    call_and_test("test1.txt", "leult a foldre", "megjott a macska\nleult a foldre\n", 0);
    call_and_test("test1.txt", "nyavogott mert ehes", "megjott a macska\nleult a foldre\nnyavogott mert ehes\n", 0);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    call_and_test("test2.txt", "h000000 regisztralt", "h000000 regisztralt\n", 1);
    call_and_test("test2.txt", "h000000 emailt kuldott h000001nek", "h000000 regisztralt\nh000000 emailt kuldott h000001nek\n", 0);
    call_and_test("test2.txt", "h000001 elhagyta a csoportot", "h000000 regisztralt\nh000000 emailt kuldott h000001nek\nh000001 elhagyta a csoportot\n", 0);
    call_and_test("test2.txt", "h000000 elhagyta a csoportot", "h000000 regisztralt\nh000000 emailt kuldott h000001nek\nh000001 elhagyta a csoportot\nh000000 elhagyta a csoportot\n", 0);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FILE* f = fopen("macska.grrr", "w");
    fprintf(f, "grrr\n");
    fclose(f);

    call_and_test("macska.grrr", "cica1", "grrr\ncica1\n", 0);
    call_and_test("macska.grrr", "cica2", "grrr\ncica1\ncica2\n", 0);
    call_and_test("macska.grrr", "cica3", "grrr\ncica1\ncica2\ncica3\n", 0);
    call_and_test("macska.grrr", "cica4", "grrr\ncica1\ncica2\ncica3\ncica4\n", 0);
    call_and_test("macska.grrr", "cica5", "grrr\ncica1\ncica2\ncica3\ncica4\ncica5\n", 0);
}