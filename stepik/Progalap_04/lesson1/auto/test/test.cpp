#include <gtest/gtest.h>
#include <cstring>

#define main main_0
#include "../src/auto.c"
#undef main

Auto a1 = {"AAA-111", 45};
Auto a2 = {"BBB-224", 53};
Auto a3 = {"KXL-675", 45};
Auto a4 = {"IWK-210", 77};
Auto a5 = {"OOO-000", 46};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Auto res = gyorsabb(a1, a2);
    ASSERT_STREQ(res.rendszam, a2.rendszam);
    ASSERT_EQ(res.sebesseg, a2.sebesseg);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Auto res = gyorsabb(a2, a1);
    ASSERT_STREQ(res.rendszam, a2.rendszam);
    ASSERT_EQ(res.sebesseg, a2.sebesseg);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Auto res = gyorsabb(a4, a5);
    ASSERT_STREQ(res.rendszam, a4.rendszam);
    ASSERT_EQ(res.sebesseg, a4.sebesseg);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Auto res = gyorsabb(a5, a3);
    ASSERT_STREQ(res.rendszam, a5.rendszam);
    ASSERT_EQ(res.sebesseg, a5.sebesseg);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Auto res = gyorsabb(a1, a3);
    ASSERT_STREQ(res.rendszam, a1.rendszam);
    ASSERT_EQ(res.sebesseg, a1.sebesseg);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Auto res = gyorsabb(a3, a1);
    ASSERT_STREQ(res.rendszam, a3.rendszam);
    ASSERT_EQ(res.sebesseg, a3.sebesseg);
}
