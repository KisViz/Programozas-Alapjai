#include <gtest/gtest.h>

#define main main_0
#include "../src/vilagos.c"
#undef main

#include "../../tools.cpp"

void feltolt(Kep* kep, const int* pixelek) {
    int a = 0;
    for (int i = 0; i < kep->magassag; i++) {
        for (int j = 0; j < kep->szelesseg; j++) {
            kep->pixelek[i][j] = pixelek[a++];
        }
    }
}

Kep* createKep(int szelesseg, int magassag, int max, const int* pixelek) {
    Kep* kep = (Kep*) malloc(sizeof(Kep));
    kep->szelesseg = szelesseg;
    kep->magassag = magassag;
    kep->maxIntenzitas = max;

    kep->pixelek = (int**) malloc(magassag * sizeof(int*));
    for (int i = 0; i < magassag; i++) {
        kep->pixelek[i] = (int*) malloc(szelesseg * sizeof(int));
    }

    feltolt(kep, pixelek);

    return kep;
}

void felszabadit(Kep* kep) {
    for (int i = 0; i < kep->magassag; i++) {
        free(kep->pixelek[i]);
    }

    free(kep->pixelek);
    free(kep);
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pixelek1[] = {1, 1, 1, 0, 0, 0, 1, 1, 1};
    Kep* kep1 = createKep(3, 3, 1, pixelek1);

    int pixelek2[] = {1, 1, 1, 1, 1, 1, 0, 1, 0};
    Kep* kep2 = createKep(3, 3, 1, pixelek2);

    int pixelek3[] = {0, 0, 0, 0, 1, 1, 0, 0, 1};
    Kep* kep3 = createKep(3, 3, 1, pixelek3);

    Kep* kepek[] = {kep1, kep2, kep3, NULL};

    Kep* res = legvilagosabb(kepek);
    ASSERT_EQ(res, kep2);

    felszabadit(kep1);
    felszabadit(kep2);
    felszabadit(kep3);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pixelek1[] = {10, 10, 5, 2, 4, 7, 4, 3, 2, 6, 4, 8};
    Kep* kep1 = createKep(2, 6, 10, pixelek1);

    int pixelek2[] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    Kep* kep2 = createKep(3, 4, 10, pixelek2);

    int pixelek3[] = {1, 1, 1, 1, 1, 1, 10, 10, 10, 10, 10, 10};
    Kep* kep3 = createKep(6, 2, 10, pixelek3);

    Kep* kepek[] = {kep1, kep2, kep3, NULL};

    Kep* res = legvilagosabb(kepek);
    ASSERT_EQ(res, kep3);

    felszabadit(kep1);
    felszabadit(kep2);
    felszabadit(kep3);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pixelek1[] = {250};
    Kep* kep1 = createKep(1, 1, 255, pixelek1);

    int pixelek2[] = {100, 100, 100, 100};
    Kep* kep2 = createKep(2, 2, 255, pixelek2);

    int pixelek3[] = {249, 249, 249, 249, 249, 249};
    Kep* kep3 = createKep(3, 2, 255, pixelek3);

    int pixelek4[] = {250, 250, 250, 249};
    Kep* kep4 = createKep(2, 2, 255, pixelek4);

    Kep* kepek[] = {kep1, kep2, kep3, kep4, NULL};

    Kep* res = legvilagosabb(kepek);
    ASSERT_EQ(res, kep1);

    felszabadit(kep1);
    felszabadit(kep2);
    felszabadit(kep3);
    felszabadit(kep4);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pixelek1[] = {10};
    Kep* kep1 = createKep(1, 1, 255, pixelek1);

    Kep* kepek[] = {kep1, NULL};

    Kep* res = legvilagosabb(kepek);
    ASSERT_EQ(res, kep1);

    felszabadit(kep1);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pixelek1[] = {10};
    Kep* kep1 = createKep(1, 1, 255, pixelek1);

    int pixelek2[] = {1, 1, 1, 1};
    Kep* kep2 = createKep(2, 2, 1, pixelek2);

    int pixelek3[] = {10, 10, 10, 10};
    Kep* kep3 = createKep(2, 2, 12, pixelek3);

    Kep* kepek[] = {kep1, kep2, kep3, NULL};

    Kep* res = legvilagosabb(kepek);
    ASSERT_EQ(res, kep2);

    felszabadit(kep1);
    felszabadit(kep2);
    felszabadit(kep3);
}
