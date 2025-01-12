#include "string.h"

typedef struct {
    char nev[100];
    int erosseg;
    int tavolsagi;
} Fegyver;

typedef struct {
    char nev[100];
    int erosseg;
    int kitartas;
    int sebesseg;
    Fegyver fegyver;
} Harcos;

int egyforma (Harcos h1, Harcos h2) {
    int h = 0;


    int szaml = 0;
    for (int i = 0; h1.nev[i] !=0 ; ++i) {
        if (h1.nev[i] != h2.nev[i]) {
            return 0;
        }
    }

    if (h1.erosseg != h2.erosseg) {
        return 0;
    }

    if (h1.kitartas != h2.kitartas) {
        return 0;
    }

    if (h1.sebesseg != h2.sebesseg) {
        return 0;
    }

    for (int i = 0; h1.fegyver.nev[i] !=0 ; ++i) {
        if (h1.fegyver.nev[i] != h2.fegyver.nev[i]) {
            return 0;
        }
    }

    if (h1.fegyver.erosseg != h2.fegyver.erosseg) {
        return 0;
    }

    if (h1.fegyver.tavolsagi != h2.fegyver.tavolsagi) {
        return 0;
    }

}