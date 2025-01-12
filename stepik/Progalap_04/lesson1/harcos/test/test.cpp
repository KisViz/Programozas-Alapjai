#include <gtest/gtest.h>

#define main main_0
#include "../src/harcos.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kard k;
    k.meret = 5;
    k.sebzes = 7;

    Harcos h;
    strcpy(h.nev, "Lajos");
    h.eletkor = 35;
    h.kard = k;

    ASSERT_STREQ(h.nev, "Lajos");
    ASSERT_EQ(h.eletkor, 35);

    ASSERT_EQ(h.kard.meret, 5);
    ASSERT_EQ(h.kard.sebzes, 7);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kard k;
    k.meret = 11;
    k.sebzes = 4;

    Harcos h;
    strcpy(h.nev, "Bela");
    h.eletkor = 24.75;
    h.kard = k;

    ASSERT_STREQ(h.nev, "Bela");
    ASSERT_EQ(h.eletkor, 24);

    ASSERT_EQ(h.kard.meret, 11);
    ASSERT_EQ(h.kard.sebzes, 4);
}