#include <gtest/gtest.h>
#include <cstdlib>
#include <climits>

#define main main_0
#include "../src/katona.c"
#undef main

TEST(tamadas, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Katona k1 = {100, 4};
    Katona k2 = {50, 6};

    tamadas(&k1, &k2);
    ASSERT_EQ(k2.eletero, 46);
    ASSERT_EQ(k2.sebzes, 6);

    tamadas(&k1, &k2);
    ASSERT_EQ(k2.eletero, 42);
    ASSERT_EQ(k2.sebzes, 6);

    tamadas(&k2, &k1);
    ASSERT_EQ(k1.eletero, 94);
    ASSERT_EQ(k1.sebzes, 4);

    const Katona k3 = {4, 2};
    tamadas(&k3, &k1);
    ASSERT_EQ(k1.eletero, 92);
    ASSERT_EQ(k1.sebzes, 4);

    k1.eletero = 0;
    k1.sebzes = 40;

    tamadas(&k1, &k2);
    ASSERT_EQ(k2.eletero, 42);
    ASSERT_EQ(k2.sebzes, 6);

    k1.eletero = 1;
    k1.sebzes = 40;

    tamadas(&k1, &k2);
    ASSERT_EQ(k2.eletero, 2);
    ASSERT_EQ(k2.sebzes, 6);

    k1.sebzes = 3;
    tamadas(&k1, &k2);
    ASSERT_EQ(k2.eletero, 0);

    k1.eletero = -1;
    ASSERT_EQ(k1.eletero, UINT_MAX);
}

TEST(harc, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Katona k1 = {40, 2};
    Katona k2 = {33, 2};
    Katona* k3 = harc(&k1, &k2);
    ASSERT_EQ(k2.eletero, 0);
    ASSERT_EQ(k2.sebzes, 2);
    ASSERT_EQ(k1.eletero, 8);
    ASSERT_EQ(k1.sebzes, 2);
    ASSERT_EQ(k3, &k1);
}

TEST(harc, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Katona k4 = {100, 5};
    Katona k5 = {50, 10};
    Katona* k6 = harc(&k4, &k5);
    ASSERT_EQ(k4.eletero, 10);
    ASSERT_EQ(k5.eletero, 0);
    ASSERT_EQ(k6, &k4);
}

TEST(harc, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Katona k7 = {100, 5};
    Katona k8 = {51, 10};
    Katona* k9 = harc(&k7, &k8);
    ASSERT_EQ(k7.eletero, 0);
    ASSERT_EQ(k8.eletero, 1);
    ASSERT_EQ(k9, &k8);
}