#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/eredmenyek.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int j1 = 3;
    int j2 = 5;
    int j3 = 7;
    int j4 = 6;
    int j5 = 1;

    int* res = jegyek(j1, j2, j3, j4, j5);
    ASSERT_EQ(res[0], j1);
    ASSERT_EQ(res[1], j2);
    ASSERT_EQ(res[2], j3);
    ASSERT_EQ(res[3], j4);
    ASSERT_EQ(res[4], j5);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int j1 = 7;
    int j2 = 10;
    int j3 = 15;
    int j4 = 30;
    int j5 = 10;

    int* res = jegyek(j1, j2, j3, j4, j5);
    ASSERT_EQ(res[0], j1);
    ASSERT_EQ(res[1], j2);
    ASSERT_EQ(res[2], j3);
    ASSERT_EQ(res[3], j4);
    ASSERT_EQ(res[4], j5);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int j1 = 0;
    int j2 = 0;
    int j3 = 0;
    int j4 = 0;
    int j5 = 100;

    int* res = jegyek(j1, j2, j3, j4, j5);
    ASSERT_EQ(res[0], j1);
    ASSERT_EQ(res[1], j2);
    ASSERT_EQ(res[2], j3);
    ASSERT_EQ(res[3], j4);
    ASSERT_EQ(res[4], j5);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int j1 = 421;
    int j2 = 21;
    int j3 = 41;
    int j4 = 71;
    int j5 = 101;

    int* res = jegyek(j1, j2, j3, j4, j5);
    ASSERT_EQ(res[0], j1);
    ASSERT_EQ(res[1], j2);
    ASSERT_EQ(res[2], j3);
    ASSERT_EQ(res[3], j4);
    ASSERT_EQ(res[4], j5);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int j1 = 24121;
    int j2 = 5211;
    int j3 = 512121;
    int j4 = 3211;
    int j5 = 1404212;

    int* res = jegyek(j1, j2, j3, j4, j5);
    ASSERT_EQ(res[0], j1);
    ASSERT_EQ(res[1], j2);
    ASSERT_EQ(res[2], j3);
    ASSERT_EQ(res[3], j4);
    ASSERT_EQ(res[4], j5);
}
