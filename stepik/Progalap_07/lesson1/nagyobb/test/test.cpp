#include <gtest/gtest.h>

#define main main_0
#include "../src/nagyobb.c"
#undef main

const int a = 3;
const int b = 8;
const int c = 5;
const int d = 2;
const int e = 2;

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&a, &b), &b);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&a, &c), &c);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&a, &d), &a);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&b, &c), &b);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&b, &d), &b);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&c, &d), &c);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&a, &a), nullptr);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&b, &b), nullptr);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&d, &e), nullptr);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyobb(&e, &a), &a);
}
