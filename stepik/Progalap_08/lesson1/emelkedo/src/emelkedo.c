#include <stdlib.h>

int* emelkedo (int hossz) {
    int* tomb = (int*) malloc(sizeof(int) * hossz);
    for (int i = 0; i < hossz; ++i) {
        tomb[i] = i+1;
    }
    return tomb;
}

// megoldas