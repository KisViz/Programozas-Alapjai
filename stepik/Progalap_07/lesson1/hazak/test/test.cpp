#include <gtest/gtest.h>

#define main main_0
#include "../src/hazak.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {0, 4, 3, 2, 6, 0, 4, 3, 3};
    ASSERT_EQ(tavolsag(&tomb[0], &tomb[4]), 4);
    ASSERT_EQ(tavolsag(&tomb[0], &tomb[3]), 3);
    ASSERT_EQ(tavolsag(&tomb[0], &tomb[7]), 7);
    ASSERT_EQ(tavolsag(&tomb[0], &tomb[5]), 5);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int t2[] = {0, 1, 2, 3, 5, 6, 7};
    ASSERT_EQ(tavolsag(&t2[0], &t2[0]), 0);
    ASSERT_EQ(tavolsag(&t2[0], &t2[1]), 1);
    ASSERT_EQ(tavolsag(&t2[3], &t2[4]), 1);
}