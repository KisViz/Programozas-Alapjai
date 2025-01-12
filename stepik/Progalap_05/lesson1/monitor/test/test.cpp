#include <gtest/gtest.h>

#define main main_0
#include "../src/monitor.c"
#undef main

Monitor m1 = {5, 7};
Monitor m2 = {3.3, 6.6};
Monitor m3 = {421.2, 42.2};
Monitor m4 = {60.2, 32.4};
Monitor m5 = {5.1, 6.8};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor mm1[] = {m1, m2, m3};
    ASSERT_EQ(monitorszemle(mm1, 3, 8.61), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor mm1[] = {m1, m2, m3};
    ASSERT_EQ(monitorszemle(mm1, 3, 8.6), 2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor mm2[] = {m2, m3, m4, m5};
    ASSERT_EQ(monitorszemle(mm2, 4, 7.4), 3);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor mm3[] = {m4, m5, m1};
    ASSERT_EQ(monitorszemle(mm3, 3, 50), 1);
}