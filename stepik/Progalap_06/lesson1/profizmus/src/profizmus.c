typedef struct {
    double a;
    double b;
} FibonacciProSorozat;

double elemszamit(FibonacciProSorozat sorozat, int n) {
    if (n == 1) {
        return sorozat.a;
    } else if (n == 2) {
        return sorozat.b;
    }

    double elso = sorozat.a;
    double masodik = sorozat.b;

    for (int i = 3; i <= n; i++) {
        double uj = elso + masodik;
        elso = masodik;
        masodik = uj;
    }

    return masodik;
}

int hatarAtlepes(FibonacciProSorozat sorozatok[], int n, int h) {
    int db = 0;
    int i = 0;
    while (!(sorozatok[i].a == 0 && sorozatok[i].b == 0)) {
        double res = elemszamit(sorozatok[i], n);
        if (res > h) {
            db++;
        }

        i++;
    }

    return db;
}