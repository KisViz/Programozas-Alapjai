#include <gtest/gtest.h>

#define main main_0
#include "../src/eltolas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "Macska";
    eltolas(str);
    ASSERT_STREQ(str, "Nbdtlb");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str2[] = "123456";
    eltolas(str2);
    ASSERT_STREQ(str2, "234567");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str3[] = "";
    eltolas(str3);
    ASSERT_STREQ(str3, "");
}