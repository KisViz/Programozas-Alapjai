#include <stdlib.h>

int* arufeltoltes(int mennyiseg, int gyartasiAzonosito) {
    int* tomb = (int*)malloc(sizeof(int) * mennyiseg);

    for (int i = 0; i < mennyiseg; ++i) {
        tomb[i] = gyartasiAzonosito;
    }

    return tomb;
}