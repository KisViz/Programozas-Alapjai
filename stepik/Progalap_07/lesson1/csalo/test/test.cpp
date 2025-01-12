#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/csalo.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pontszam = 30;
    int max = 20;
    int elvart = pontszam>max?0:pontszam;
    csalo(&pontszam, max);
    ASSERT_EQ(pontszam, elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pontszam = 30;
    int max = 50;
    int elvart = pontszam>max?0:pontszam;
    csalo(&pontszam, max);
    ASSERT_EQ(pontszam, elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pontszam = 11;
    int max = 50;
    int elvart = pontszam>max?0:pontszam;
    csalo(&pontszam, max);
    ASSERT_EQ(pontszam, elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pontszam = 70;
    int max = 50;
    int elvart = pontszam>max?0:pontszam;
    csalo(&pontszam, max);
    ASSERT_EQ(pontszam, elvart);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int pontszam = 352;
    int max = 352;
    int elvart = pontszam>max?0:pontszam;
    csalo(&pontszam, max);
    ASSERT_EQ(pontszam, elvart);
}
