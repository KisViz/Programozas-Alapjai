#include <gtest/gtest.h>

#define main main_0
#include "../src/viragagyasok.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sor = 3;
    int oszlop = 7;
    int elvart[] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    int* tomb = ultet(sor, oszlop);
    ASSERT_ARRAY_EQ(elvart, tomb, sor*oszlop);
    free(tomb);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sor = 1;
    int oszlop = 13;
    int elvart[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int* tomb = ultet(sor, oszlop);
    ASSERT_ARRAY_EQ(elvart, tomb, sor*oszlop);
    free(tomb);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sor = 5;
    int oszlop = 2;
    int elvart[] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0};
    int* tomb = ultet(sor, oszlop);
    ASSERT_ARRAY_EQ(elvart, tomb, sor*oszlop);
    free(tomb);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sor = 10;
    int oszlop = 1;
    int elvart[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int* tomb = ultet(sor, oszlop);
    ASSERT_ARRAY_EQ(elvart, tomb, sor*oszlop);
    free(tomb);
}