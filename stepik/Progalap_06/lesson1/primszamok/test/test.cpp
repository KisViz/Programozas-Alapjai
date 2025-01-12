#include <gtest/gtest.h>

#define main main_0
#include "../src/primszamok.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(3, 10), 3),
        5);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(0, 10), 4),
        5);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(0, 1), 0),
        5);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(0, 2), 1),
        5);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(31, 55), 6),
        5);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(101, 211), 22),
        5);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(552, 41241), 4217),
        5);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(5122, 1500000), 113470),
        5);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(10000000, 11500000), 92709),
        5);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(primek(500000000, 500300000), 14935),
        5);
}