typedef struct {
    double a;
    double b;
    double c;
} Haromszog;

double kerulet(Haromszog h) {
    return (h.a+h.b+h.c);
}