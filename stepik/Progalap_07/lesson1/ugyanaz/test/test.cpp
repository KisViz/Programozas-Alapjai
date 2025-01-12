#include <gtest/gtest.h>

#define main main_0
#include "../src/ugyanaz.c"
#undef main

int a = 3;
int b = 2;
int c = 3;

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ugyanaz(&a, &a), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ugyanaz(&a, &b), 0);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ugyanaz(&a, &c), 0);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ugyanaz(&b, &b), 1);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ugyanaz(&b, &c), 0);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ugyanaz(&c, &c), 1);
}
