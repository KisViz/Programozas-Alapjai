#include <gtest/gtest.h>

#define main main_0
#include "../src/tukorforditas.cpp"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char eredeti[] = "macska";
    char elvart[] = "zphxzn";
    fordit(eredeti);
    ASSERT_STREQ(eredeti, elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char eredeti[] = "a lovak osszessege 3.";
    char elvart[] = ".3 vtvhhvahhl pzelo z";
    fordit(eredeti);
    ASSERT_STREQ(eredeti, elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char eredeti[] = "0123??@a";
    char elvart[] = "z@??3210";
    fordit(eredeti);
    ASSERT_STREQ(eredeti, elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char eredeti[] = "azaz az az";
    char elvart[] = "az az azaz";
    fordit(eredeti);
    ASSERT_STREQ(eredeti, elvart);
}