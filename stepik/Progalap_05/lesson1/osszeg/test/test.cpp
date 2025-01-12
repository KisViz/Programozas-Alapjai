#include <gtest/gtest.h>

#define main main_0
#include "../src/osszeg.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[200];
    IO("5 7", main_0(), str);
    ASSERT_STREQ(str, "Irj be 2 szamot: 5+7=12\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[200];
    IO("4141 222212", main_0(), str);
    ASSERT_STREQ(str, "Irj be 2 szamot: 4141+222212=226353\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[200];
    IO("-313 -1", main_0(), str);
    ASSERT_STREQ(str, "Irj be 2 szamot: -313+-1=-314\n");
}