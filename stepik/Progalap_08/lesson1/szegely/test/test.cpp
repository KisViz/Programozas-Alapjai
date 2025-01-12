#include <gtest/gtest.h>

#define main main_0
#include "../src/szegely.c"
#undef main

#include "../../tools.cpp"

void teszteles(int sorok, int oszlopok, char normalbetu, char szegelybetu) {
    char** szoveg = szegely(sorok, oszlopok, normalbetu, szegelybetu);
    for (int i = 0; i < sorok; i++) {
        for (int j = 0; j < oszlopok; j++) {
                ASSERT_EQ(szoveg[i][j], i == 0 || j == 0 || i == sorok-1 || j == oszlopok-1 ? szegelybetu : normalbetu);
        }
    }

    for (int i = 0; i < sorok; i++) {
        free(szoveg[i]);
    }
    free(szoveg);
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(7, 5, 'a', 'b');
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(2, 2, 'a', 'b');
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(100, 30, 'a', 'b');
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(1000, 1000, 'S', '*');
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(100000, 3, '*', 'B');
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(3, 100000, '?', '!');
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(2, 2, '?', '!');
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(1, 100, '?', '!');
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(100, 1, '?', '!');
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    teszteles(1, 1, '?', '!');
}