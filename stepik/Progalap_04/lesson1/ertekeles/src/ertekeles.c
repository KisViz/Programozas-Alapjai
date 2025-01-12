#include <string.h>

typedef struct {
    char neptunkod[7];
    int pontszam;
} Ertekeles;

Ertekeles ertekel  (char neptun[], int pont) {
    Ertekeles ert;
    for (int i = 0; neptun[i] != 0; ++i) {
        ert.neptunkod[i] = neptun[i];
    }

    if (pont < 0) {
        ert.pontszam = 0;
    } else if (pont > 100){
        ert.pontszam = 100;
    } else {
        ert.pontszam = pont;
    }

    return ert;
}