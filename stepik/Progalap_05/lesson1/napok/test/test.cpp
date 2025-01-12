#include <gtest/gtest.h>

#define main main_0
#include "../src/napok.c"
#undef main

char str1[] = "hetfo";
char str2[] = "kedd";
char str3[] = "szerda";
char str4[] = "csutortok";
char str5[] = "pentek";
char str6[] = "szombat";
char str7[] = "vasarnap";
char str8[] = "julius";

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str1), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str6), 6);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str2), 2);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str5), 5);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str8), 0);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str3), 3);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str4), 4);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(hetnapja(str7), 7);
}