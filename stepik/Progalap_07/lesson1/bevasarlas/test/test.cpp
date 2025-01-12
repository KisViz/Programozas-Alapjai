#include <gtest/gtest.h>

#define main main_0
#include "../src/bevasarlas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {4, 6, 4, 3, 1, 1, 0};
    ASSERT_EQ(arulista(arak), 19);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int arak2[] = {5, 5, 0};
    ASSERT_EQ(arulista(arak2), 10);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int arak3[] = {4, 8, 0};
    ASSERT_EQ(arulista(arak3), 12);
}