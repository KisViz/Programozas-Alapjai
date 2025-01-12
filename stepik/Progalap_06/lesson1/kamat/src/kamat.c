#include "math.h"

int kamat(int kezdet, double kamat, unsigned int evek) {
    int aktualis = kezdet;

    if (aktualis * kamat < 100) {
        return 0;
    }

    for (int i = 0; i < evek; i++) {
        aktualis = (int) ((aktualis * (100 + kamat)) / 100);
    }

    return aktualis - kezdet;
}