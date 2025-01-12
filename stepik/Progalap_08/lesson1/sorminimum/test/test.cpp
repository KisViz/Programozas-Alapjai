#include <gtest/gtest.h>

#define main main_0
#include "../src/sorminimum.c"
#undef main

void tesztel(const int* tomb, int sorok, int oszlopok, int elvartEredmeny) {
    int res = minimum(tomb, sorok, oszlopok);
    ASSERT_EQ(res, elvartEredmeny);
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {3, 3, 2, 5};
    tesztel(t, 2, 2, 0);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {3, 2, 1, 5, 3, 3, 1, 5, 3, 5, 5, 5, 2, 2, 2, 4, 2, 1};
    tesztel(t, 3, 6, 2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[100000];
    for (int i = 0; i < 100000; i++) {
        t[i] = 2;
    }
    tesztel(t, 1, 100000, 0);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {2100000000, 10, 4, 3, 2100000000, 3, 5, 3, 3, 2110000000, 3, 3};
    tesztel(t, 3, 4, 1);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {-10, -50, -20, -30, -30, -30, -2, -2, -2, -2, -200, -2, 2, 2, 1, 2, 1, 2, 0, 0, 0, 0, 0, 0, -100000};
    tesztel(t, 4, 6, 1);
}