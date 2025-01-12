#include <stdlib.h>

int* jegyek(int egyes, int kettes, int harmas, int negyes, int otos) {
    int* tomb = (int*) malloc((sizeof(int) * 5));

    tomb[0] = egyes;
    tomb[1] = kettes;
    tomb[2] = harmas;
    tomb[3] = negyes;
    tomb[4] = otos;

    return tomb;
    // megoldas
}