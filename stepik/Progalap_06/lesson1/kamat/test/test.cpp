#include <gtest/gtest.h>

#define main main_0
#include "../src/kamat.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(kamat(1000, 10, 0), 0),
        1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(kamat(1000, 10, 1), 100),
        1);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(kamat(1000, 10, 2), 210),
        1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(kamat(10, 5, 3030), 0),
        1);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(kamat(10, 10, 11), 12),
        1);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(kamat(5216, 4.634, 60), 73607),
        1);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        ASSERT_EQ(kamat(100000, 0.00467, 1450), 5800),
        1);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
            ASSERT_EQ(kamat(1, 99.9, 385316450), 0),
            1);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
            ASSERT_EQ(kamat(10000, 0.00005, 570013799), 0),
            1);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
            ASSERT_EQ(kamat(10, 9.99, 4234266353), 0),
            1);
}