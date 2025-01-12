#include <gtest/gtest.h>

#define main main_0
#include "../src/szamrendszer.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char* a = "90";
    ASSERT_EQ(alap(a), 10);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("101011001"), 2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("12"), 3);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("414561"), 7);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("222222"), 3);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("AAAA"), 11);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("FAFA41"), 16);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("GAGA"), 17);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("KA41A"), 21);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("NANA"), 24);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("QKA"), 27);
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("WWW"), 33);
}

TEST(Teszt, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("ZOO"), 36);
}

TEST(Teszt, 14) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("UWU"), 33);
}

TEST(Teszt, 15) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(alap("C0S0I0G0A"), 29);
}
