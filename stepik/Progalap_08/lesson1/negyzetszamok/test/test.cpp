#include <gtest/gtest.h>

#define main main_0
#include "../src/negyzetszamok.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {4, 6, 4, 5, 22, 4000};
    int darab = 6;
    int elvart = 4;
    CHECK_RUNNING_TIME(
        ASSERT_EQ(negyzetszamok(tomb, darab), elvart),
        5);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {1, 6, 4, 5, 22, 4000};
    int darab = 6;
    int elvart = 4;
    CHECK_RUNNING_TIME(
        ASSERT_EQ(negyzetszamok(tomb, darab), elvart),
        5);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {4, 9, 16, 4, 9, 4};
    int darab = 6;
    int elvart = 16;
    CHECK_RUNNING_TIME(
        ASSERT_EQ(negyzetszamok(tomb, darab), elvart),
        5);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {3, 5, 11, 4141, 4125461, 16};
    int darab = 5;
    int elvart = -1;
    CHECK_RUNNING_TIME(
        ASSERT_EQ(negyzetszamok(tomb, darab), elvart),
        5);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {1179441649, 1394499649, 11175649, 1878615649, 1878442281};
    int darab = 5;
    int elvart = 1878615649;
    CHECK_RUNNING_TIME(
        ASSERT_EQ(negyzetszamok(tomb, darab), elvart),
        5);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[46000];
    for (int i = 1; i < 46000; i++) {
        tomb[i] = i*i;
    }

    tomb[0] = 7;
    tomb[3] = 2125210000;

    int darab = 46000;
    int elvart = 2125210000;

    CHECK_RUNNING_TIME(
        ASSERT_EQ(negyzetszamok(tomb, darab), elvart),
        5);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        for (int a = 0; a < 3000; a++) {
            int tomb[46000];
            for (int i = 1; i < 46000; i++) {
                tomb[i] = 2125210000;
            }
            tomb[0] = 7;
            int darab = 46000;
            int elvart = 2127146641; tomb[3] = elvart;


            ASSERT_EQ(negyzetszamok(tomb, darab), elvart);
        }, 5);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        for (int a = 0; a < 3000; a++) {
            int tomb[46000];
            for (int i = 1; i < 46000; i++) {
                tomb[i] = 2125210000;
            }
            int darab = 46000;
            int elvart = 2125210000;


            ASSERT_EQ(negyzetszamok(tomb, darab), elvart);
        }, 5);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        for (int a = 0; a < 3000; a++) {
            int tomb[46000];
            for (int i = 1; i < 46000; i++) {
                tomb[i] = 2125210000;
            }
            int darab = 46000;
            int elvart = 2125210000;

            ASSERT_EQ(negyzetszamok(tomb, darab), elvart);
        }, 5);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
        for (int a = 0; a < 3000; a++) {
            int tomb[46000];
            for (int i = 1; i < 46000; i++) {
                tomb[i] = 2125210000;
            }
            int darab = 46000;
            int elvart = 2125210000;

            ASSERT_EQ(negyzetszamok(tomb, darab), elvart);
        }, 5);
}