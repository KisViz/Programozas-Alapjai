#include <gtest/gtest.h>
#include <cstring>

#define main main_0
#include "../src/gyar.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[50] = "kereksuti";
    int ar = 55000;
    int nehezseg = 40;

    Suti s = sutitSut(str, nehezseg, ar);
    ASSERT_STREQ(s.nev, "kereksuti");
    ASSERT_EQ(s.elkeszitesiAr, ar);
    ASSERT_EQ(s.elkeszitesiNehezseg, nehezseg);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[50] = "torta";
    int ar = 3000;
    int nehezseg = 2;

    Suti s = sutitSut(str, nehezseg, ar);
    ASSERT_STREQ(s.nev, "torta");
    ASSERT_EQ(s.elkeszitesiAr, ar);
    ASSERT_EQ(s.elkeszitesiNehezseg, nehezseg);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[50] = "kamionsuti";
    int ar = 155000;
    int nehezseg = 55;

    Suti s = sutitSut(str, nehezseg, ar);
    ASSERT_STREQ(s.nev, "kamionsuti");
    ASSERT_EQ(s.elkeszitesiAr, ar);
    ASSERT_EQ(s.elkeszitesiNehezseg, nehezseg);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[50] = "keksz";
    int ar = 2000;
    int nehezseg = 1;

    Suti s = sutitSut(str, nehezseg, ar);
    ASSERT_STREQ(s.nev, "keksz");
    ASSERT_EQ(s.elkeszitesiAr, ar);
    ASSERT_EQ(s.elkeszitesiNehezseg, nehezseg);
}