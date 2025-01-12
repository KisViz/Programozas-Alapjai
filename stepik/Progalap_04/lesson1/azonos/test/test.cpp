#include <gtest/gtest.h>

#define main main_0
#include "../src/azonos.c"
#undef main

Fegyver f1 = {"kosar", 3, 1};
Fegyver f2 = {"kosar", 3, 2};
Fegyver f4 = {"KOSAR", 3, 1};


Harcos h1 = {"Marika", 10, 20, 30, f1};
Harcos h2 = {"Marika", 11, 20, 30, f1};
Harcos h3 = {"Marika", 10, 20, 31, f1};
Harcos h4 = {"Marika", 10, 20, 30, f2};
Harcos h5 = {"Marika", 10, 20, 30, f4};
Harcos h6 = {"MARIKA", 10, 20, 30, f1};


TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h1;
    Harcos b = h2;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h1;
    Harcos b = h3;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h1;
    Harcos b = h4;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h1;
    Harcos b = h5;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h1;
    Harcos b = h6;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h2;
    Harcos b = h4;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h2;
    Harcos b = h6;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h2;
    Harcos b = h6;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h2;
    Harcos b = h2;
    int res = 1;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h6;
    Harcos b = h6;
    int res = 1;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Harcos a = h4;
    Harcos b = h5;
    int res = 0;

    int result = egyforma(a, b);
    ASSERT_EQ(res, result);
}