#include <gtest/gtest.h>

#define main main_0
#include "../src/learazas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char ar[] = "30000";
    char elvart[] = "29999";
    learazas(ar);
    ASSERT_STREQ(ar, elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char ar[] = "1000";
    char elvart[] = "999";
    learazas(ar);
    ASSERT_STREQ(ar, elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char ar[] = "3000000";
    char elvart[] = "2999999";
    learazas(ar);
    ASSERT_STREQ(ar, elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char ar[] = "90000";
    char elvart[] = "89999";
    learazas(ar);
    ASSERT_STREQ(ar, elvart);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char ar[] = "10";
    char elvart[] = "9";
    learazas(ar);
    ASSERT_STREQ(ar, elvart);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char ar[] = "100000";
    char elvart[] = "99999";
    learazas(ar);
    ASSERT_STREQ(ar, elvart);
}
