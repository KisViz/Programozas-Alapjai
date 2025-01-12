#include <gtest/gtest.h>

#define main main_0
#include "../src/kiadas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* s1 = "100101";
    const char* s2 = "101010";
    const char* s3 = "10010111";
    const char* s4 = "1";

    int elvart = 231;

    const char* const szamok[] = {s1, s2, s3, s4, NULL};
    ASSERT_EQ(osszeg(szamok), elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* s1 = "1000101011";
    const char* s2 = "101010110";
    const char* s3 = "1";
    const char* s4 = "110";

    int elvart = 904;

    const char* const szamok[] = {s1, s2, s3, s4, NULL};
    ASSERT_EQ(osszeg(szamok), elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* s1 = "1";
    const char* s2 = "1111111111";

    int elvart = 1024;

    const char* const szamok[] = {s1, s2, NULL};
    ASSERT_EQ(osszeg(szamok), elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* s1 = "1010110101010101101";
    const char* s2 = "10011101010101010101010";
    const char* s3 = "11";
    const char* s4 = "11111111111111111111111111";

    int elvart = 72619353;

    const char* const szamok[] = {s1, s2, s3, s4, NULL};
    ASSERT_EQ(osszeg(szamok), elvart);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* s1 = "0";
    const char* s2 = "10";

    int elvart = 2;

    const char* const szamok[] = {s1, s2, NULL};
    ASSERT_EQ(osszeg(szamok), elvart);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* s1 = "100";

    int elvart = 4;

    const char* const szamok[] = {s1, NULL};
    ASSERT_EQ(osszeg(szamok), elvart);
}