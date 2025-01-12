#include <gtest/gtest.h>

#define main main_0
#include "../src/mutatas.c"
#undef main

#include "../../tools.cpp"

TEST(Test, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 3;
    ASSERT_EQ(mutatas(&a), 3);
}

TEST(Test, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int b = 2;
    ASSERT_EQ(mutatas(&b), 2);
}

TEST(Test, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int c = 7;
    ASSERT_EQ(mutatas(&c), 7);
}

TEST(Test, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int d = 1;
    ASSERT_EQ(mutatas(&d), 1);
}

TEST(Test, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int e = 101;
    ASSERT_EQ(mutatas(&e), 101);
}

TEST(Test, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int f = -2;
    ASSERT_EQ(mutatas(&f), -2);
}