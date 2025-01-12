#include <gtest/gtest.h>

#define main main_0
#include "../src/szamtaniosszeg.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(osszeg(10, 5, 2), 25),
    0.5)
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(osszeg(10, 5, 34), 3145),
    0.5)
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(osszeg(623, -6, 11), 6523),
    0.5)
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(osszeg(-412, 122, 42), 87738),
    0.5)
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(osszeg(-212, 11, 36), -702),
    0.5)
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
            ASSERT_NEAR(osszeg(11.325, -0.152, 330), -4514.07, 0.0001),
            0.5)
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(osszeg(3, 0, 4200000000), 12600000000),
    0.5)
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_NEAR(osszeg(302.5, 1.1, 2100000000), 2425500634095000000.0, 100),
    0.5)
}
