#include <gtest/gtest.h>
#include <cstdio>

#define main main_0
#include "../src/ajto.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];

    double szelesseg = 5;
    double magassag = 4;

    char input[100];
    sprintf(input, "%lf %lf", szelesseg, magassag);

    IO(input, Ajto a = ajtotLetrehoz(), str);
    ASSERT_NEAR(a.szelesseg, szelesseg, 0.0001);
    ASSERT_NEAR(a.magassag, magassag, 0.0001);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];

    double szelesseg = 5.32;
    double magassag = 4.77;

    char input[100];
    sprintf(input, "%lf %lf", szelesseg, magassag);

    IO(input, Ajto a = ajtotLetrehoz(), str);
    ASSERT_NEAR(a.szelesseg, szelesseg, 0.0001);
    ASSERT_NEAR(a.magassag, magassag, 0.0001);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];

    double szelesseg = 5;
    double magassag = 0.014;

    char input[100];
    sprintf(input, "%lf %lf", szelesseg, magassag);

    IO(input, Ajto a = ajtotLetrehoz(), str);
    ASSERT_NEAR(a.szelesseg, szelesseg, 0.0001);
    ASSERT_NEAR(a.magassag, magassag, 0.0001);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];

    double szelesseg = 0.734;
    double magassag = 25112;

    char input[100];
    sprintf(input, "%lf %lf", szelesseg, magassag);

    IO(input, Ajto a = ajtotLetrehoz(), str);
    ASSERT_NEAR(a.szelesseg, szelesseg, 0.0001);
    ASSERT_NEAR(a.magassag, magassag, 0.0001);
}
