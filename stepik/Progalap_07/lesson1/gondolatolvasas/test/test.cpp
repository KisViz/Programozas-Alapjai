#include <gtest/gtest.h>

#define main main_0
#include "../src/gondolatolvasas.c"
#undef main

#include "../../tools.cpp"

TEST(gondolatolvas, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {2, 4, 0};
    ASSERT_EQ(gondolatolvas(t1), 8);

    int t2[] = {1, 2, 0, 1};
    ASSERT_EQ(gondolatolvas(t2), 3);

    int t3[] = {4, 7, 4, 3, 2, 8, 0, 6, 3, 1};
    ASSERT_EQ(gondolatolvas(t3), 40);
}

TEST(nulla, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    int t1[] = {-2451251, -2451251, -2454251, -2451251, -2452251, -2451251, -2451251, -2451251, -2451251, -2451251, -2451251};
    IO("", int r = nulla(t1), str)
    ASSERT_STREQ(str, "");
    ASSERT_EQ(gondolatolvas(t1), 0);
    ASSERT_EQ(t1[r-1], 0);
}

TEST(tizenharom, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    int t1[] = {-2451251, -2451251, -2454251, -2451251, -2452251, -2451251, -2451251, -2451251, -2451251, -2451251, -2451251};
    IO("", int r = tizenharom(t1), str)
    ASSERT_STREQ(str, "");
    ASSERT_EQ(gondolatolvas(t1), 13);
    ASSERT_EQ(t1[r-1], 0);
}