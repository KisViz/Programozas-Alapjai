#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/kartya.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int meret = 10;

    int* tomb = kartyalapok(meret);
    for (int i = 0; i < meret; i++) {
        ASSERT_EQ(tomb[i], 0);
    }

    free(tomb);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int meret = 1;

    int* tomb = kartyalapok(meret);
    for (int i = 0; i < meret; i++) {
        ASSERT_EQ(tomb[i], 0);
    }

    free(tomb);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int meret = 100;

    int* tomb = kartyalapok(meret);
    for (int i = 0; i < meret; i++) {
        ASSERT_EQ(tomb[i], 0);
    }

    free(tomb);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int meret = 5000;

    int* tomb = kartyalapok(meret);
    for (int i = 0; i < meret; i++) {
        ASSERT_EQ(tomb[i], 0);
    }

    free(tomb);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int meret = 1000000;

    int* tomb = kartyalapok(meret);
    for (int i = 0; i < meret; i++) {
        ASSERT_EQ(tomb[i], 0);
    }

    free(tomb);
}
