#include "limits.h"

typedef struct {
    int sebesseg;
    int magassag;
} Repulo;

Repulo zuhanas(Repulo repulok[], int db) {
    int kszazSebMin = INT_MIN;
    Repulo kszaz;
    int kszazdb = 0;

    for (int i = 0; i < db; ++i) {
        if (repulok[i].magassag < 100 && repulok[i].sebesseg > kszazSebMin) {
            kszazSebMin = repulok[i].sebesseg;
            kszaz = repulok[i];
            kszazdb++;
        }
    }

    if (kszazdb > 0) {
        return kszaz;
    } else {
        int legalacsonyabb = INT_MAX;
        for (int i = 0; i < db; ++i) {
            if (repulok[i].magassag < legalacsonyabb) {
                legalacsonyabb = repulok[i].magassag;
            }
        }

        Repulo uj = {INT_MIN, legalacsonyabb};
        for (int i = 0; i < db; ++i) {
            if (repulok[i].magassag == uj.magassag && repulok[i].sebesseg > uj.sebesseg) {
                uj = repulok[i];
            }
        }
        return uj;
    }


    //return repulok[0];
}