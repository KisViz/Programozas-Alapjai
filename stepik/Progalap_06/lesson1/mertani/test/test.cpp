#include <gtest/gtest.h>

#define main main_0
#include "../src/mertani.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 2;
    double masodik = 4;
    int n = 5;
    double res = 16;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 5;
    double masodik = 15;
    int n = 11;
    double res = 196830;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 2;
    double masodik = 5;
    int n = 2;
    double res = 3;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 2;
    double masodik = 6;
    int n = 1;
    double res = 4.0/3;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 8.5;
    double masodik = 8.67;
    int n = 11;
    double res = 0.203165737;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 4;
    double masodik = 8;
    int n = -2;
    double res = 0.25;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 10;
    double masodik = 20;
    int n = -2;
    double res = 0.625;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 10;
    double masodik = 20;
    int n = 0;
    double res = 2.5;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 10;
    double masodik = -20;
    int n = 11;
    double res = 15360;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 10;
    double masodik = -20;
    int n = -11;
    double res = 0.003662109;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 1;
    double masodik = 1;
    int n = 2100000000;
    double res = 0;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    double elso = 2;
    double masodik = 2;
    int n = -2100000000;
    double res = 0;

    CHECK_RUNNING_TIME(
        ASSERT_NEAR(kiszamit(elso, masodik, n), res, 0.0001),
        0.5);
}