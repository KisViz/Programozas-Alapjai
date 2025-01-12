#include <gtest/gtest.h>

#define main main_0
#include "../src/sporolas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(sporolas(100, 1), 1200);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(sporolas(1000, 3), 36000);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(sporolas(50000, 10), 6000000);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(sporolas(1400, 0), 0);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(sporolas(100000, 100), 120000000);
}
