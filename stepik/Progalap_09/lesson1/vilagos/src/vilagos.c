#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int szelesseg;
    int magassag;
    int maxIntenzitas;
    int** pixelek;
} Kep;

double intenzitasAtlag(Kep* kep) {
    int osszeg = 0;
    for (int i = 0;  i < kep->magassag; i++) {
        for (int j = 0; j < kep->szelesseg; j++) {
            osszeg += kep->pixelek[i][j];
        }
    }

    return osszeg / (double)(kep->szelesseg * kep->magassag);
}

Kep* legvilagosabb(Kep** kepek) {
    return NULL;
}