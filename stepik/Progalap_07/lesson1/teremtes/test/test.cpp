#include <gtest/gtest.h>

#define main main_0
#include "../src/teremtes.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int* p = letrehoz(5);
    ASSERT_EQ(*p, 5);
    free(p);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int* q = letrehoz(777737374);
    ASSERT_EQ(*q, 777737374);
    free(q);
}