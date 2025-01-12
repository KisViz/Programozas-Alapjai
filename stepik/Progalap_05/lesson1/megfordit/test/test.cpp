#include <gtest/gtest.h>

#define main main_0
#include "../src/megfordit.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 6 3 2 0", int res = main_0(), str)
    ASSERT_STREQ(str, "2 3 6 5 \n");
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4 0", int res = main_0(), str)
    ASSERT_STREQ(str, "4 \n");
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("0", int res = main_0(), str)
    ASSERT_STREQ(str, "\n");
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("2 3 4 5 6 7 8 9 10 1 11 12 13 14 15 15 16 17 0", int res = main_0(), str)
    ASSERT_STREQ(str, "17 16 15 15 14 13 12 11 1 10 9 8 7 6 5 4 3 2 \n");
    ASSERT_EQ(res, 0);
}
