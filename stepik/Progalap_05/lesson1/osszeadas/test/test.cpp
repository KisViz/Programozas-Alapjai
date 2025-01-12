#include <gtest/gtest.h>

#define main main_0
#include "../src/osszeadas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {3, 6, 5, 3, -3};
    ASSERT_EQ(osszeadas(t1, 5), 14);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t2[] = {7, 6, 34, 4, -444};
    ASSERT_EQ(osszeadas(t2, 5), -393);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t3[] = {3, -3, 66, -66, -32, 32};
    ASSERT_EQ(osszeadas(t3, 6), 0);
}