#include <math.h>

typedef struct {
    double x;
    double y;
} Monitor;

double atmero(Monitor m) {
    return sqrt(m.x * m.x + m.y * m.y);
}

int monitorszemle(Monitor monitorok[], int db, double minMeret) {
    int ok = 0;

    for (int i = 0; i < db; i++) {
        if (atmero(monitorok[i]) >= minMeret) {
            ok++;
        }
    }

    return ok;
}