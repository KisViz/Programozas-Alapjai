#include <gtest/gtest.h>

#define main main_0
#include "../src/kartyak.c"
#undef main

Kartya k1 = {1, "asd1", 1, 5, 3}; // 1
Kartya k2 = {2, "asd2", 4, 9, 8}; // 2
Kartya k3 = {3, "asd3", 5, 8, 5};
Kartya k4 = {4, "asd4", 6, 3, 2};
Kartya k5 = {5, "asd1", 1, 5, 3}; // 1
Kartya k6 = {6, "asd2", 2, 7, 6}; // 2
Kartya k7 = {7, "asd5", 6, 6, 3};
Kartya k8 = {8, "asd4", 2, 3, 1};
Kartya k9 = {9, "asd6", 3, 1, 2};
Kartya k10 = {10, "asd7", 1, 1};
Kartya k11 = {11, "valami hosszu nevu is legyen azert", 1, 5, 1};
Kartya k12 = {12, "a", 2, 4, 3};
Kartya k13 = {13, "asd2", 2, 2, 2};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kartya kartyak[] = {k1, k2, k3};
    int db = 3;
    int result = 0;

    int res = ismetlodestKeres(kartyak, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kartya kartyak[] = {k1, k1, k1, k1, k1};
    int db = 5;
    int result = 4;

    int res = ismetlodestKeres(kartyak, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kartya kartyak[] = {k1, k2, k3, k4, k5};
    int db = 5;
    int result = 0;

    int res = ismetlodestKeres(kartyak, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kartya kartyak[] = {k7, k8, k9, k10, k11, k12, k13};
    int db = 7;
    int result = 0;

    int res = ismetlodestKeres(kartyak, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kartya kartyak[] = {k1, k1, k1, k1, k2, k3, k4, k2, k2, k5, k5, k6, k7, k8, k9, k10, k11, k11, k11, k1, k1, k2, k3, k4, k5, k6, k6, k6, k7, k7, k7, k12, k12, k13, k13, k4, k5, k6, k9, k9, k9, k1, k13};
    int db = 43;
    int result = 30;

    int res = ismetlodestKeres(kartyak, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kartya kartyak[] = {k4};
    int db = 1;
    int result = 0;

    int res = ismetlodestKeres(kartyak, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Kartya kartyak[] = {k3, k3};
    int db = 2;
    int result = 1;

    int res = ismetlodestKeres(kartyak, db);
    ASSERT_EQ(res, result);
}
