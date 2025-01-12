#include <gtest/gtest.h>

#define main main_0
#include "../src/kavics.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Kavics* k = kavicsKreacio(4, 'a');
    ASSERT_EQ(k->meret, 4);
    ASSERT_EQ(k->szin, 'a');
    free((void*) k);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Kavics* k2 = kavicsKreacio(7, 'b');
    ASSERT_EQ(k2->meret, 7);
    ASSERT_EQ(k2->szin, 'b');
    free((void*) k2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Kavics* k3 = kavicsKreacio(0, 'z');
    ASSERT_EQ(k3->meret, 0);
    ASSERT_EQ(k3->szin, 'z');
    free((void*) k3);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Kavics* k4 = kavicsKreacio(211, 'm');
    ASSERT_EQ(k4->meret, 211);
    ASSERT_EQ(k4->szin, 'm');
    free((void*) k4);
}