#include <gtest/gtest.h>

#define main main_0
#include "../src/terkep.c"
#undef main

void tesztel(int sor, int oszlop) {
    char** tabla = terkep(sor, oszlop);

    for (int i = 0; i < sor; i++) {
        for (int j = 0; j < oszlop; j++) {
            tabla[i][j] = 0;
        }
    }

    for (int i = 0; i < sor; i++) {
        free(tabla[i]);
    }
    free(tabla);
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(3, 3);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(3, 100000);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(100000, 3);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(3000, 3000);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(1, 100000);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(100000, 1);
}