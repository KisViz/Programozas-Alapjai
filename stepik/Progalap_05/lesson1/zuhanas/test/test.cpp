#include <gtest/gtest.h>

#define main main_0
#include "../src/zuhanas.c"
#undef main

Repulo r1 = {100, 105};
Repulo r2 = {101, 105};
Repulo r3 = {98, 110};
Repulo r4 = {60, 101};
Repulo r5 = {500, 130};
Repulo r6 = {40, 100};
Repulo r7 = {120, 100};
Repulo r8 = {44, 87};
Repulo r9 = {55, 55};
Repulo r10 = {11, 65};


TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r8, r9, r10};
    int db = 3;
    Repulo res = r9;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r8, r7, r10};
    int db = 3;
    Repulo res = r8;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r2, r4, r8, r7};
    int db = 4;
    Repulo res = r8;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r5, r2, r3};
    int db = 3;
    Repulo res = r2;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r5, r2, r3, r1};
    int db = 4;
    Repulo res = r2;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r5, r1, r3, r2};
    int db = 4;
    Repulo res = r2;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r6, r7};
    int db = 2;
    Repulo res = r7;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r7};
    int db = 1;
    Repulo res = r7;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Repulo repulok[] = {r8};
    int db = 1;
    Repulo res = r8;

    Repulo result = zuhanas(repulok, db);
    ASSERT_EQ(res.sebesseg, result.sebesseg);
    ASSERT_EQ(res.magassag, result.magassag);
}