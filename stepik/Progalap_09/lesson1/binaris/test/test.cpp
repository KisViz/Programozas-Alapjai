#include <gtest/gtest.h>

#define main main_0
#include "../src/binaris.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("1101001110110011"), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("1"), 1);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("0"), 1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("110101000010110110101010100101010101010101010001010010010101010110101000010110110101010100101010101010101010001010010010101010110101000010110110101010100101010101010101010001010010010101010110101000010110110101010100101010101010101010001010010010101010110101000010110110101010100101010101010101010001010010010101010110101000010110110101010100101010101010101010001010010010101010"), 1);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("1000"), 1);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("10000005"), 0);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("100002202201201202012120"), 0);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("123123123123123123123123123123"), 0);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("macska"), 0);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(binaris("10BAD10"), 0);
}
