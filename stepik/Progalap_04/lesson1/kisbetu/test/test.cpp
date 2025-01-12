#include <gtest/gtest.h>

#define main main_0
#include "../src/kisbetu.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "macska";
    int res = 6;

    ASSERT_EQ(kisbetukMegszamolasaASzovegben(str), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "k";
    int res = 1;

    ASSERT_EQ(kisbetukMegszamolasaASzovegben(str), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "\0a";
    int res = 0;

    ASSERT_EQ(kisbetukMegszamolasaASzovegben(str), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "LOVACSKA";
    int res = 0;

    ASSERT_EQ(kisbetukMegszamolasaASzovegben(str), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "Ica";
    int res = 2;

    ASSERT_EQ(kisbetukMegszamolasaASzovegben(str), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "A kamion es a {} \n AZZZZAZ lul xd POG 123 !!%//+!%//=%!s ___";
    int res = 15;

    ASSERT_EQ(kisbetukMegszamolasaASzovegben(str), res);
}