#include <stdio.h>

void gyoztes(char fajlnev[]) {
    char name[32];
    FILE *file = fopen(fajlnev, "r");
    fscanf(file, "%s", &name);
    fclose(file);
    for (int i = 0; name[i] != 0; ++i) {
        printf("%c", name[i]);
    }
    printf("\n");
}