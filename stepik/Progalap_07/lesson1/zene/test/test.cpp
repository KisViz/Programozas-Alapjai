#include <gtest/gtest.h>

#define main main_0
#include "../src/zene.c"
#undef main

Zene z1 = {"asd", "ansan", 180};
Zene z2 = {"asd", "gvdkm", 177};
Zene z3 = {"asd", "mio", 188};
Zene z4 = {"zzz", "mbabi", 48};
Zene z5 = {"zzz", "naousn", 88};
Zene z6 = {"qqq", "avjnkj", 100};
Zene z7 = {"qqq", "mnasv", 1000};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zene* zz1[] = {&z1, &z2, &z3};

    ASSERT_EQ(hosszu(zz1, 3, "asd"), &z3);
    ASSERT_EQ(hosszu(zz1, 3, "qqq"), nullptr);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zene* zz2[] = {&z4, &z5, &z6, &z7};

    ASSERT_EQ(hosszu(zz2, 4, "asd"), nullptr);
    ASSERT_EQ(hosszu(zz2, 4, "zzz"), &z5);
    ASSERT_EQ(hosszu(zz2, 4, "qqq"), &z7);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zene* zz3[] = {&z1, &z3, &z5, &z6, &z7};

    ASSERT_EQ(hosszu(zz3, 5, "asd"), &z3);
    ASSERT_EQ(hosszu(zz3, 5, "zzz"), &z5);
    ASSERT_EQ(hosszu(zz3, 5, "qqq"), &z7);
    ASSERT_EQ(hosszu(zz3, 5, "nnn"), nullptr);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zene* zz4[] = {&z1, &z2, &z3, &z4, &z5, &z6, &z7};

    ASSERT_EQ(hosszu(zz4, 7, "asd"), &z3);
    ASSERT_EQ(hosszu(zz4, 7, "zzz"), &z5);
    ASSERT_EQ(hosszu(zz4, 7, "qqq"), &z7);
    ASSERT_EQ(hosszu(zz4, 7, "nnn"), nullptr);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zene* zz5[] = {&z2};

    ASSERT_EQ(hosszu(zz5, 1, "asd"), &z2);
    ASSERT_EQ(hosszu(zz5, 1, "asdu"), nullptr);
}
