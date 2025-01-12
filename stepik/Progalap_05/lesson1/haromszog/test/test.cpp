#include <gtest/gtest.h>

#define main main_0
#include "../src/haromszog.c"
#undef main

Haromszog h1 = {4, 5, 6};
Haromszog h2 = {4.5, 5.5, 5.5};
Haromszog h3 = {2, 6.5, 7};
Haromszog h4 = {10, 1, 9.5};
Haromszog h5 = {5, 7, 3};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(egyforma(h2, h3, h1), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(egyforma(h3, h1, h2), 1);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(egyforma(h1, h2, h4), 0);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(egyforma(h4, h1, h3), 0);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(egyforma(h4, h5, h1), 1);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(egyforma(h4, h5, h2), 0);
}