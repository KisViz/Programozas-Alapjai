#include <gtest/gtest.h>

#define main main_0
#include "../src/napoleon.c"
#undef main

TEST(kodol, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "macska";
    char megoldas[] = "nbdtlb";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, megoldas);
}

TEST(kodol, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "zebra";
    char megoldas[] = "afcsb";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, megoldas);
}

TEST(kodol, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "{medve01}++ ? 0 : 9 + '@'";
    char megoldas[] = "{nfewf01}++ ? 0 : 9 + '@'";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, megoldas);
}

TEST(dekodol, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "macska";
    char megoldas[] = "nbdtlb";
    dekodol(megoldas);
    ASSERT_STREQ(szoveg, megoldas);
}

TEST(dekodol, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "zebra";
    char megoldas[] = "afcsb";
    dekodol(megoldas);
    ASSERT_STREQ(szoveg, megoldas);
}

TEST(dekodol, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "{medve01}++ ? 0 : 9 + '@'";
    char megoldas[] = "{nfewf01}++ ? 0 : 9 + '@'";
    dekodol(megoldas);
    ASSERT_STREQ(szoveg, megoldas);
}

TEST(vegyes, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "ne legyen kecske fejeden mert nem kellemes!!!!!!4negy??@?_:;##<>";
    char megoldas[] = "ne legyen kecske fejeden mert nem kellemes!!!!!!4negy??@?_:;##<>";

    for (int i = 0; i < 100000; i++) {
        kodol(szoveg);
    }

    for (int i = 0; i < 100000; i++) {
        dekodol(szoveg);
    }

    ASSERT_STREQ(szoveg, megoldas);
}