#include <stdio.h>
#include <string.h>

int pgm(const char* fajlnev) {
    int ok = 0;
    FILE* f = fopen(fajlnev, "r");

    if (f == NULL) {
        return 0;
    }

    // megoldas

    fclose(f);

    return ok;
}
