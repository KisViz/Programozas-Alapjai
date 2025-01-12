#include <gtest/gtest.h>

#define main main_0
#include "../src/osszeg.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {3, 4, 7, 2};
    ASSERT_EQ(osszeg(t1, 4), 16);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t2[] = {4, 4, 4, 1};
    ASSERT_EQ(osszeg(t2, 4), 13);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t3[] = {5, 2, 1};
    ASSERT_EQ(osszeg(t3, 3), 8);
}