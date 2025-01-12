#include <gtest/gtest.h>

#define main main_0
#define free(p) printf("%p", p);free(p)
#include "../src/temetes.c"
#undef free
#undef main

#include "../../tools.cpp"

void fff(char eredmeny[]) {
    int* b = (int*) malloc(sizeof(int));
    int* c = (int*) malloc(sizeof(int));
    int* d = (int*) malloc(sizeof(int));
    int* e = (int*) malloc(sizeof(int));
    int* f = (int*) malloc(sizeof(int));
    int* g = (int*) malloc(sizeof(int));
    int* h = (int*) malloc(sizeof(int));
    int* i = (int*) malloc(sizeof(int));
    int* j = (int*) malloc(sizeof(int));
    int* k = (int*) malloc(sizeof(int));
    int* l = (int*) malloc(sizeof(int));
    int* m = (int*) malloc(sizeof(int));

    sprintf(eredmeny, "%p%p%p%p%p%p%p%p%p%p%p%p", b, c, d, e, f, g, h, i, j, k, l, m);

    felszabadit(b);
    felszabadit(c);
    felszabadit(d);
    felszabadit(e);
    felszabadit(f);
    felszabadit(g);
    felszabadit(h);
    felszabadit(i);
    felszabadit(j);
    felszabadit(k);
    felszabadit(l);
    felszabadit(m);
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[500];
    char elvart[500];
    IO("", fff(elvart), str);
    ASSERT_STREQ(str, elvart);
}
