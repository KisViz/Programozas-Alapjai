#include <gtest/gtest.h>

#define main main_0
#include "../src/paros.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(paros(4, 7), 0);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(paros(6, 4), 1);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(paros(-3, -3), 0);
}