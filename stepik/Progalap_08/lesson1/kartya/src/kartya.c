#include <stdlib.h>

int* kartyalapok(int mennyi) {
    int* lapok = (int*) malloc(sizeof (int) * mennyi);

    for (int i = 0; i < mennyi; i++) {
        lapok[i] = 0;
    }

    return lapok;
}