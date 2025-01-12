#include <gtest/gtest.h>
#include <cstring>

#define main main_0
#include "../src/fa.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Fa f1;
    strcpy(f1.fajta, "fenyo");
    f1.orokzold = 1;
    f1.magassag = 130;

    Fa f2;
    strcpy(f2.fajta, "tolgy");
    f2.orokzold = 0;
    f2.magassag = 155;

    int result = 0;

    int res = orokzold(f1, f2);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Fa f1;
    strcpy(f1.fajta, "fenyo");
    f1.orokzold = 1;
    f1.magassag = 130;

    Fa f2;
    strcpy(f2.fajta, "tolgy");
    f2.orokzold = 0;
    f2.magassag = 155;

    int result = 0;

    int res = orokzold(f2, f1);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Fa f1;
    strcpy(f1.fajta, "fenyo");
    f1.orokzold = 0;
    f1.magassag = 153;

    Fa f2;
    strcpy(f2.fajta, "tolgy");
    f2.orokzold = 1;
    f2.magassag = 154;

    int result = 1;

    int res = orokzold(f1, f2);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Fa f1;
    strcpy(f1.fajta, "fenyo");
    f1.orokzold = 1;
    f1.magassag = 140;

    Fa f2;
    strcpy(f2.fajta, "tolgy");
    f2.orokzold = 0;
    f2.magassag = 140;

    int result = 1;

    int res = orokzold(f1, f2);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Fa f1;
    strcpy(f1.fajta, "fenyo");
    f1.orokzold = 0;
    f1.magassag = 140;

    Fa f2;
    strcpy(f2.fajta, "tolgy");
    f2.orokzold = 1;
    f2.magassag = 140;

    int result = 0;

    int res = orokzold(f1, f2);
    ASSERT_EQ(res, result);
}