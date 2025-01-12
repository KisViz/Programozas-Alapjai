#include <gtest/gtest.h>

#define main main_0
#include "../src/macska.c"
#undef main

#include "../../tools.cpp"

int main_0();

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", int res = main_0(), str);
    ASSERT_STREQ(str, "Macska\nMacska\n");
    ASSERT_EQ(res, 0);
}