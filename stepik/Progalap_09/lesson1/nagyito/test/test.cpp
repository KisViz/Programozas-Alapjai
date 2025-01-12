#include <gtest/gtest.h>

#define main main_0
#include "../src/nagyito.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "CACA";
    const char* a2 = "CAC7";
    const char* helyes = a1;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "888";
    const char* a2 = "634";
    const char* helyes = a1;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "47";
    const char* a2 = "101";
    const char* helyes = a2;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "140";
    const char* a2 = "140";
    const char* helyes = NULL;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "BBB";
    const char* a2 = "BB";
    const char* helyes = a1;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "ABCD";
    const char* a2 = "ABCDE";
    const char* helyes = a2;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "FAFAFA";
    const char* a2 = "FAFA95";
    const char* helyes = a1;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a1 = "159E328";
    const char* a2 = "1599328";
    const char* helyes = a1;
    ASSERT_EQ(nagyobb(a1, a2), helyes);
}