#include <stdio.h>

void ranglista() {
    FILE *f = fopen("ranglista.txt", "r");

    int szam;
    int i = 1;
    while (!feof(f)) {
        fscanf(f, "%d ", &szam);
        printf("%d. %d\n", i, szam);
        i++;
    }

    fclose(f);
}