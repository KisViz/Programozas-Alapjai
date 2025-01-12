#include <gtest/gtest.h>

#define main main_0
#include "../src/xfaktor.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("boritek.txt", "Alee");
    char str[1000];
    IO("", main_0(), str);
    ASSERT_STREQ(str, "Alee");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("boritek.txt", "USNK");
    char str[1000];
    IO("", main_0(), str);
    ASSERT_STREQ(str, "USNK");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("boritek.txt", "Opitz Barbara");
    char str[1000];
    IO("", main_0(), str);
    ASSERT_STREQ(str, "Opitz Barbara");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("boritek.txt", "Danics Dora");
    char str[1000];
    IO("", main_0(), str);
    ASSERT_STREQ(str, "Danics Dora");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("boritek.txt", "Vastag Csaba");
    char str[1000];
    IO("", main_0(), str);
    ASSERT_STREQ(str, "Vastag Csaba");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("boritek.txt", "Legyen Azert Valami Hosszu Nevu Is Hogy Nehez Legyen A Feladat");
    char str[1000];
    IO("", main_0(), str);
    ASSERT_STREQ(str, "Legyen Azert Valami Hosszu Nevu Is Hogy Nehez Legyen A Feladat");
}
