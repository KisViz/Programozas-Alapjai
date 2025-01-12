#include <gtest/gtest.h>

#define main main_0
#include "../src/szamok.c"
#undef main

int a = 3;
int b = 5;
int c = 7;
int d = 4;

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(&a, &b), 8);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(&a, &c), 10);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(&a, &d), 7);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(&b, &c), 12);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(&b, &d), 9);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(&c, &d), 11);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(&c, &c), 14);
}
