#include <stdio.h>

int legjobb (char name[]) {
    FILE *file = fopen(name, "r");

    int hscore = -1;
    int j;
    for (int i = 0; feof(file) == 0; ++i) {
        fscanf(file, "%d", &j);
        if (j > hscore) {
            hscore = j;
        }
    }

    return hscore;
}