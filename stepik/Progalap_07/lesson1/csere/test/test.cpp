#include <gtest/gtest.h>

#define main main_0
#include "../src/csere.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 3;
    int b = 5;
    int c = 8;

    csere(&a, &b);
    ASSERT_EQ(a, 5);
    ASSERT_EQ(b, 3);
    ASSERT_EQ(c, 8);

    csere(&c, &a);
    ASSERT_EQ(a, 8);
    ASSERT_EQ(b, 3);
    ASSERT_EQ(c, 5);

    csere(&b, &a);
    ASSERT_EQ(a, 3);
    ASSERT_EQ(b, 8);
    ASSERT_EQ(c, 5);

    csere(&a, &c);
    ASSERT_EQ(a, 5);
    ASSERT_EQ(b, 8);
    ASSERT_EQ(c, 3);
}