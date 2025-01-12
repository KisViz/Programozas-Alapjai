#include <string.h>
#include <stdlib.h>

void osszead(char a[], char b[], char c[]) {
    int hosszA = strlen(a);
    int hosszB = strlen(b);

    int hossz = (hosszA > hosszB ? hosszA : hosszB) + 1;

    c[hossz] = 0;
    int atvitel = 0;
    int i;
    for (i = 0; i < hossz; i++) {
        int ertekA = 0;
        int ertekB = 0;

        if (hosszA - 1 - i >= 0) {
            ertekA = a[hosszA - 1 - i] - '0';
        }

        if (hosszB - 1 - i >= 0) {
            ertekB = b[hosszB - 1 - i] - '0';
        }

        int osszeg = ertekA + ertekB + atvitel;
        if (osszeg >= 10) {
            atvitel = osszeg / 10;
            osszeg = osszeg % 10;
        } else {
            atvitel = 0;
        }

        c[hossz - 1 - i] = osszeg + '0';
    }

    int j = 0;
    int db = 0;
    while (c[j] == '0') {
        db++;
        j++;
    }

    while (c[j] != 0) {
        c[j-db] = c[j];
        j++;
    }

    if (j != db) {
        c[j-db] = 0;
    } else {
        c[1] = 0;
    }
}