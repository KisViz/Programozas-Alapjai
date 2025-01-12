#include <gtest/gtest.h>
#include <cstring>

#define main main_0
#include "../src/legyek.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Legycsapo l;
    strcpy(l.szin, "piros");
    l.meret = 50;
    l.hatekonysag = 0.15;

    ASSERT_STREQ(l.szin, "piros");
    ASSERT_EQ(l.meret, 50);
    ASSERT_NEAR(l.hatekonysag, 0.15, 0.00001);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Legycsapo l;
    strcpy(l.szin, "kek");
    l.meret = 22;
    l.hatekonysag = 0.55;

    ASSERT_STREQ(l.szin, "kek");
    ASSERT_EQ(l.meret, 22);
    ASSERT_NEAR(l.hatekonysag, 0.55, 0.00001);
}