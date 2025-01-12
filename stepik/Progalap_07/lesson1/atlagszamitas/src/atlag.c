#include <stdio.h>

double atlag(int db) {
    double atlag = 0;
    int adott = 0;

    FILE *f = fopen("naplo.txt", "r");
    for (int i = 0; i < db; ++i) {
        fscanf(f, "%d", &adott);
        atlag += adott;
    }
    fclose(f);

    return atlag / db;
}