#include <gtest/gtest.h>

#define main main_0
#include "../src/kocsi.c"
#undef main

const Csoki cs1 = {10, 20};
const Csoki cs2 = {20, 15};
const Csoki cs3 = {20, 20};
const Csoki cs4 = {30, 40};
const Csoki cs5 = {300, 500};
const Csoki cs6 = {50, 20};
const Csoki cs7 = {100, 10};
const Csoki cs8 = {10, 100};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Csoki* csokik[] = {&cs1, &cs2, NULL, &cs3, &cs4, &cs5, NULL};
    int darabszam = 2;
    int elvart = 1;
    ASSERT_EQ(legolcsobb(csokik, darabszam), elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Csoki* csokik[] = {&cs1, &cs3, NULL, &cs6, &cs2, &cs3, NULL};
    int darabszam = 2;
    int elvart = 0;
    ASSERT_EQ(legolcsobb(csokik, darabszam), elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Csoki* csokik[] = {&cs1, &cs3, NULL, &cs6, &cs2, &cs3, NULL, &cs1, NULL, &cs1, &cs7, &cs4, NULL};
    int darabszam = 4;
    int elvart = 2;
    ASSERT_EQ(legolcsobb(csokik, darabszam), elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Csoki* csokik[100001];
    for (int i = 0; i < 100000; i++) {
        csokik[i] = &cs1;
    }
    csokik[100000] = NULL;

    int darabszam = 1;
    int elvart = 0;
    ASSERT_EQ(legolcsobb(csokik, darabszam), elvart);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Csoki* csokik[] = {&cs5, NULL, &cs8, NULL};

    int darabszam = 2;
    int elvart = 1;
    ASSERT_EQ(legolcsobb(csokik, darabszam), elvart);
}