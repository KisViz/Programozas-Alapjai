#include <gtest/gtest.h>

#define main main_0
#include "../src/haromszog.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Haromszog h1 = {5, 7, 8};
    ASSERT_NEAR(kerulet(h1), 20, 0.0001);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Haromszog h1 = {5.3, 4.4, 7.4};
    ASSERT_NEAR(kerulet(h1), 17.1, 0.0001);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Haromszog h1 = {0.2, 0.1, 0.15};
    ASSERT_NEAR(kerulet(h1), 0.45, 0.0001);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Haromszog h1 = {0.1, 10, 10};
    ASSERT_NEAR(kerulet(h1), 20.1, 0.0001);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Haromszog h1 = {3.111, 4.222, 5.333};
    ASSERT_NEAR(kerulet(h1), 12.666, 0.0001);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Haromszog h1 = {10000.01, 20000, 12303.3};
    ASSERT_NEAR(kerulet(h1), 42303.31, 0.0001);
}
