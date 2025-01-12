#include <gtest/gtest.h>

#define main main_0
#include "../src/novenytan.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(5), 5);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(1), 0);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(2), 1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(8), 21);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(10), 55);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(13), 233);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(18), 2584);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(minimum(42), 267914296);
}