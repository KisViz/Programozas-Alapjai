#include <gtest/gtest.h>

#define main main_0
#include "../src/arufeltoltes.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int mennyiseg = 7;
    int aruSorszam = 7;
    int* tomb = arufeltoltes(mennyiseg, aruSorszam);
    for (int i = 0; i < mennyiseg; i++) {
        ASSERT_EQ(tomb[i], aruSorszam);
    }
    free(tomb);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int mennyiseg = 4;
    int aruSorszam = 15;
    int* tomb = arufeltoltes(mennyiseg, aruSorszam);
    for (int i = 0; i < mennyiseg; i++) {
        ASSERT_EQ(tomb[i], aruSorszam);
    }
    free(tomb);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int mennyiseg = 15;
    int aruSorszam = 4;
    int* tomb = arufeltoltes(mennyiseg, aruSorszam);
    for (int i = 0; i < mennyiseg; i++) {
        ASSERT_EQ(tomb[i], aruSorszam);
    }
    free(tomb);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int mennyiseg = 1000000;
    int aruSorszam = 22;
    int* tomb = arufeltoltes(mennyiseg, aruSorszam);
    for (int i = 0; i < mennyiseg; i++) {
        ASSERT_EQ(tomb[i], aruSorszam);
    }
    free(tomb);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int mennyiseg = 22;
    int aruSorszam = 2100000000;
    int* tomb = arufeltoltes(mennyiseg, aruSorszam);
    for (int i = 0; i < mennyiseg; i++) {
        ASSERT_EQ(tomb[i], aruSorszam);
    }
    free(tomb);
}