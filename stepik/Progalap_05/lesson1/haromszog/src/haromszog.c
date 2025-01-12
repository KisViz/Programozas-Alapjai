typedef struct { ;
    double a;
    double b;
    double c;
}Haromszog;

int egyforma(Haromszog a,Haromszog b,Haromszog c) {
    if (a.a + a.b + a.c == b.a + b.b + b.c || a.a + a.b + a.c == c.a + c.b + c.c || b.a + b.b + b.c == c.a + c.b + c.c) {
        return 1;
    }

    return 0;
}