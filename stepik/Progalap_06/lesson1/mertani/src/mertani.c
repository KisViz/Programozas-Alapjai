#include "math.h"

double kiszamit(double elso, double masodik, int n) {
    double q = masodik / elso;

    if (q == 1) {
        return 0;
    }

    double aktualis = n == 1 ? elso : masodik;

    if (n > 2) {
        for (int i = 3; i <= n; i++) {
            aktualis = aktualis * q;
        }
    } else if (n < 1) {
        for (int i = 1; i >= n; i--) {
            aktualis = aktualis / q;
        }
    }

    aktualis = aktualis - (aktualis / q);
    if (aktualis < 0) {
        aktualis *= -1;
    }

    return aktualis;
}