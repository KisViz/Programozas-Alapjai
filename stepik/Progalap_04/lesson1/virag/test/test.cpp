#include <gtest/gtest.h>
#include <cstring>

#define main main_0
#include "../src/virag.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Virag v;
    strcpy(v.nev, "halvirag");
    strcpy(v.szin, "kek");
    v.meret = 10;
    v.fenyigeny = 0.5;
    v.vizigeny = 0.7;

    ASSERT_STREQ(v.nev, "halvirag");
    ASSERT_STREQ(v.szin, "kek");
    ASSERT_EQ(v.meret, 10);
    ASSERT_NEAR(v.fenyigeny, 0.5, 0.0001);
    ASSERT_NEAR(v.vizigeny, 0.7, 0.0001);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Virag v;
    strcpy(v.nev, "lotus");
    strcpy(v.szin, "zold");
    v.meret = 44;
    v.fenyigeny = 0.3;
    v.vizigeny = 0.96;

    ASSERT_STREQ(v.nev, "lotus");
    ASSERT_STREQ(v.szin, "zold");
    ASSERT_EQ(v.meret, 44);
    ASSERT_NEAR(v.fenyigeny, 0.3, 0.0001);
    ASSERT_NEAR(v.vizigeny, 0.96, 0.0001);
}