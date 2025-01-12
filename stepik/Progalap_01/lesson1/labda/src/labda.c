#include <math.h>

double g = 9.81;

double utkozes(double h1, double h2) {
    // az elso labda legyen alul
    if (h1 > h2) {
        double tmp = h1;
        h1 = h2;
        h2 = tmp;
    }

    // 1. Mikor er le az elso?
    double t0 = sqrt(2 * (h1 - 0.5) / g);

    // 2. Hol van ilyenkor a masik?
    double posH2 = h2 - (h1 - 0.5);

    // 3. A kozos kezdosebesseg
    double v0 = g * t0;

    // 4. Az utkozesig eltelo ido
    double t1 = (posH2 - 0.5 - 1) / (2 * v0);

    // 5. Az osszesitett ido kiszamitasa
    double t = t0 + t1;

    return t;
}