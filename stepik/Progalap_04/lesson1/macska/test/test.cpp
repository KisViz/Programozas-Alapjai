#include <gtest/gtest.h>

#define main main_0
#include "../src/macska.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Macska m;
    m.kor = 10;
    ASSERT_EQ(m.kor, 10);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Macska m;
    m.kor = 223;
    ASSERT_EQ(m.kor, 223);
}