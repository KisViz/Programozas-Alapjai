#include <gtest/gtest.h>

#define main main_0
#include "../src/laptop.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Laptop l1 = {"a1", 3.3, 16};
    ASSERT_STREQ(l1.gyarto, "a1");
    ASSERT_NEAR(l1.kijelzoMeret, 3.3, 0.00001f);
    ASSERT_EQ(l1.memoria, 16);

    ASSERT_FALSE(isConst(l1.gyarto));
    ASSERT_TRUE(isConst(l1.kijelzoMeret));
    ASSERT_FALSE(isConst(l1.memoria));

    const Laptop l2 = {"a2", 3.8, 8};
    ASSERT_STREQ(l2.gyarto, "a2");
    ASSERT_NEAR(l2.kijelzoMeret, 3.8, 0.000001f);
    ASSERT_EQ(l2.memoria, 8);

    ASSERT_TRUE(isConst(l2.gyarto));
    ASSERT_TRUE(isConst(l2.kijelzoMeret));
    ASSERT_TRUE(isConst(l2.memoria));
}