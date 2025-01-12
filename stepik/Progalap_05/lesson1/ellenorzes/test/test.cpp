#include <gtest/gtest.h>

#define main main_0
#include "../src/ellenorzes.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {72, 12574, 63277};
    ASSERT_EQ(gyartosor(t1, 3), 3);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t2[] = {55278, 12345678, 12};
    ASSERT_EQ(gyartosor(t2, 3), 2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t3[] = {154130, 154131, 154172};
    ASSERT_EQ(gyartosor(t3, 3), 2);
}