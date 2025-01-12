#include "math.h"

typedef struct {
    double a;
}Negyzet;

typedef struct {
    double d;
}Kor;

typedef struct {
    double a;
    double b;
    double c;
}Haromszog;

double teruletOsszeg(Negyzet n, Kor k, Haromszog h) {
    double tn = n.a * n.a;
    double tk = (k.d / 2) * (k.d / 2) * M_PI;

    double kh2 = (h.a + h.b + h.c) / 2;
    double th = sqrt(kh2 * (kh2 - h.a) * (kh2 - h.b) * (kh2 - h.c));

    return tn + tk + th;
}