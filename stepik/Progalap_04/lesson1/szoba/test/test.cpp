#include <gtest/gtest.h>
#include <cstring>

#define main main_0
#include "../src/szoba.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Szoba sz;
    strcpy(sz.tipus, "furdo");
    sz.meret = 4.4;
    sz.homerseklet = 20.5;

    ASSERT_STREQ(sz.tipus, "furdo");
    ASSERT_NEAR(sz.meret, 4.4, 0.001);
    ASSERT_NEAR(sz.homerseklet, 20.5, 0.001);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Szoba sz;
    strcpy(sz.tipus, "konyha");
    sz.meret = 14.4;
    sz.homerseklet = 22.3;

    ASSERT_STREQ(sz.tipus, "konyha");
    ASSERT_NEAR(sz.meret, 14.4, 0.001);
    ASSERT_NEAR(sz.homerseklet, 22.3, 0.001);
}
