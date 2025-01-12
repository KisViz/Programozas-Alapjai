#include <gtest/gtest.h>

#define main main_0
#include "../src/hatalmas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {5, 7, 4, 3};
    ASSERT_EQ(legnagyobb(t1, 4), 7);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t2[] = {-5, -3, -6, -75};
    ASSERT_EQ(legnagyobb(t2, 4), -3);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t3[] = {-2103030300, -1988722811, -2106392100, -2000000000, -2100000000, -2099999998};
    ASSERT_EQ(legnagyobb(t3, 6), -1988722811);
}