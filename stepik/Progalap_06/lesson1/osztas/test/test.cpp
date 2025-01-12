#include <gtest/gtest.h>

#define main main_0
#include "../src/osztas.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 5;
    int b = 3;
    int res = 1;
    char err_res[] = "";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 10;
    int b = 5;
    int res = 2;
    char err_res[] = "";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 5;
    int b = 7;
    int res = 0;
    char err_res[] = "";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 5;
    int b = -3;
    int res = -1;
    char err_res[] = "";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = -50;
    int b = -3;
    int res = 16;
    char err_res[] = "";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 0;
    int b = 5;
    int res = 0;
    char err_res[] = "";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 5;
    int b = 0;
    int res = 0;
    char err_res[] = "Hibas ertekek!\n";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 0;
    int b = 0;
    int res = 0;
    char err_res[] = "Hibas ertekek!\n";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 1;
    int b = 1;
    int res = 1;
    char err_res[] = "";

    char str[100];
    IO("", int fgvres = osztas(a, b), str);
    ASSERT_EQ(fgvres, res);
    ASSERT_STREQ(err_res, error_string);
}