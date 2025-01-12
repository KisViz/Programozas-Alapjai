#include <gtest/gtest.h>

#define main main_0
#include "../src/pontszamok.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {7, 40, 104, 75, 0, 0, 20, 11, 20, 5};
    int szamol[] = {7, 40, 104, 75, 0, 0, 20, 11, 20, 5};
    int darab = 10;

    int res[darab];
    eltarol(szamok, darab);
    FILE* f = fopen("pontszamok.bin", "rb");
    fread(res, sizeof(int), darab, f);
    fclose(f);

    ASSERT_ARRAY_EQ(szamol, res, darab)
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {1, 1, 1, 1, 2, 2, 2, 2};
    int szamol[] = {1, 1, 1, 1, 2, 2, 2, 2};
    int darab = 8;

    int res[darab];
    eltarol(szamok, darab);
    FILE* f = fopen("pontszamok.bin", "rb");
    fread(res, sizeof(int), darab, f);
    fclose(f);

    ASSERT_ARRAY_EQ(szamol, res, darab)
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {1513};
    int szamol[] = {1513};
    int darab = 1;

    int res[darab];
    eltarol(szamok, darab);
    FILE* f = fopen("pontszamok.bin", "rb");
    fread(res, sizeof(int), darab, f);
    fclose(f);

    ASSERT_ARRAY_EQ(szamol, res, darab)
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 10000;
    int szamok[darab];
    for (int i = 0; i < darab; i++) szamok[i] = i;

    int szamol[darab];
    for (int i = 0; i < darab; i++) szamol[i] = i;

    int res[darab];
    eltarol(szamok, darab);
    FILE* f = fopen("pontszamok.bin", "rb");
    fread(res, sizeof(int), darab, f);
    fclose(f);

    ASSERT_ARRAY_EQ(szamol, res, darab)
}