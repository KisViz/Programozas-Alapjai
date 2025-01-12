#include <gtest/gtest.h>

#define main main_0
#include "../src/szamtani.c"
#undef main

#include "../../tools.cpp"

void szamtani(int kezdoelem, int kulonbseg, int mennyiseg);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamtani(10, 2, 3), str);
    ASSERT_STREQ(str, "10\n12\n14\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamtani(2, 2, 10), str);
    ASSERT_STREQ(str, "2\n4\n6\n8\n10\n12\n14\n16\n18\n20\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamtani(5, 3, 1), str);
    ASSERT_STREQ(str, "5\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamtani(10, -7, 3), str);
    ASSERT_STREQ(str, "10\n3\n-4\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamtani(-3, 2, 5), str);
    ASSERT_STREQ(str, "-3\n-1\n1\n3\n5\n");
}


TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamtani(53, 0, 35), str);
    ASSERT_STREQ(str, "53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n53\n");
}