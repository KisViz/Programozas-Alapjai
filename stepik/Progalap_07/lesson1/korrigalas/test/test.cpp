#include <gtest/gtest.h>

#define main main_0
#include "../src/korrigalas.c"
#undef main

TEST(korrigal, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 7;

    korrigal(&a, 0, 10);
    ASSERT_EQ(a, 7);
}

TEST(korrigal, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 7;
    korrigal(&a, -2, 3);
    ASSERT_EQ(a, 3);
}

TEST(korrigal, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 3;
    korrigal(&a, 5, 10);
    ASSERT_EQ(a, 5);
}

TEST(korrigal, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = 5;
    korrigal(&a, 3, 5);
    ASSERT_EQ(a, 5);
}

TEST(ellenoriz, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int a = 8;
    ASSERT_EQ(ellenoriz(&a, 3, 9), 1);
}

TEST(ellenoriz, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int a = 8;
    ASSERT_EQ(ellenoriz(&a, 2, 6), 0);
}

TEST(ellenoriz, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int a = 8;
    ASSERT_EQ(ellenoriz(&a, 5, 8), 1);
}

TEST(ellenoriz, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int a = 8;
    ASSERT_EQ(ellenoriz(&a, 10, 20), 0);
}

TEST(ellenoriz, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int a = 8;
    ASSERT_EQ(ellenoriz(&a, 8, 12), 1);
}

TEST(ellenoriz, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int a = 8;
    ASSERT_EQ(ellenoriz(&a, -10, -5), 0);
}
