#include <gtest/gtest.h>

#define main main_0
#include "../src/alma.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[100];
    int db = 70;
    almakSzama(szoveg, db);
    ASSERT_STREQ(szoveg, "almak szama: 70");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[100];
    int db = 2;
    almakSzama(szoveg, db);
    ASSERT_STREQ(szoveg, "almak szama: 2");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[100];
    int db = 44;
    almakSzama(szoveg, db);
    ASSERT_STREQ(szoveg, "almak szama: 44");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[100];
    int db = 5125121;
    almakSzama(szoveg, db);
    ASSERT_STREQ(szoveg, "almak szama: 5125121");
}