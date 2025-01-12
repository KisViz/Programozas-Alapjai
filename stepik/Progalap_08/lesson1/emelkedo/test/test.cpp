#include <gtest/gtest.h>

#define main main_0
#include "../src/emelkedo.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 4;
    int* res = emelkedo(darab);
    for (int i = 0; i < darab; i++) {
        ASSERT_EQ(res[i], i+1);
    }
    free(res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 70;
    int* res = emelkedo(darab);
    for (int i = 0; i < darab; i++) {
        ASSERT_EQ(res[i], i+1);
    }
    free(res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 10000000;
    int* res = emelkedo(darab);
    for (int i = 0; i < darab; i++) {
        ASSERT_EQ(res[i], i+1);
    }
    free(res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 1;
    int* res = emelkedo(darab);
    for (int i = 0; i < darab; i++) {
        ASSERT_EQ(res[i], i+1);
    }
    free(res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 717;
    int* res = emelkedo(darab);
    for (int i = 0; i < darab; i++) {
        ASSERT_EQ(res[i], i+1);
    }
    free(res);
}