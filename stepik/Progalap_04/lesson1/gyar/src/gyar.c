#include "string.h"

typedef struct {
    char nev[32];
    int elkeszitesiNehezseg;
    int elkeszitesiAr;
}Suti;


Suti sutitSut (char nev[], int elkeszitesiNehezseg, int elkeszitesiAr) {
    Suti uj;

    strcpy(uj.nev, nev);

    uj.elkeszitesiNehezseg = elkeszitesiNehezseg;
    uj.elkeszitesiAr = elkeszitesiAr;
    return uj;
}