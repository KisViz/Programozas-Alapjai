#include <gtest/gtest.h>

#define main main_0
#include "../src/ssd.c"
#undef main

Ssd s1 = {500, 10000}; // 20
Ssd s2 = {1000, 12000}; // 12
Ssd s3 = {1000, 18000}; // 18
Ssd s4 = {100, 6000}; // 60
Ssd s5 = {1200, 18500}; // 15.41
Ssd s6 = {1, 100}; // 100
Ssd s7 = {10000, 50000}; // 5
Ssd s8 = {100000, 550000}; // 5.5
Ssd s9 = {1, 4}; // 4
Ssd s10 = {10, 54}; // 5.4
Ssd s11 = {100, 547}; // 5.47

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ssd s[] = {s1, s2, s3, s4};
    Ssd megoldas = s2;
    int db = 4;

    Ssd res = legolcsobb(s, db);
    ASSERT_EQ(res.kapacitas, megoldas.kapacitas);
    ASSERT_EQ(res.ar, megoldas.ar);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ssd s[] = {s4, s6, s8};
    Ssd megoldas = s8;
    int db = 3;

    Ssd res = legolcsobb(s, db);
    ASSERT_EQ(res.kapacitas, megoldas.kapacitas);
    ASSERT_EQ(res.ar, megoldas.ar);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ssd s[] = {s8, s2, s10, s11};
    Ssd megoldas = s10;
    int db = 4;

    Ssd res = legolcsobb(s, db);
    ASSERT_EQ(res.kapacitas, megoldas.kapacitas);
    ASSERT_EQ(res.ar, megoldas.ar);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ssd s[] = {s10, s8, s2, s11};
    Ssd megoldas = s10;
    int db = 4;

    Ssd res = legolcsobb(s, db);
    ASSERT_EQ(res.kapacitas, megoldas.kapacitas);
    ASSERT_EQ(res.ar, megoldas.ar);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ssd s[] = {s11, s2, s8, s10};
    Ssd megoldas = s10;
    int db = 4;

    Ssd res = legolcsobb(s, db);
    ASSERT_EQ(res.kapacitas, megoldas.kapacitas);
    ASSERT_EQ(res.ar, megoldas.ar);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ssd s[] = {s6, s9, s7, s5};
    Ssd megoldas = s9;
    int db = 4;

    Ssd res = legolcsobb(s, db);
    ASSERT_EQ(res.kapacitas, megoldas.kapacitas);
    ASSERT_EQ(res.ar, megoldas.ar);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ssd s[] = {s6};
    Ssd megoldas = s6;
    int db = 1;

    Ssd res = legolcsobb(s, db);
    ASSERT_EQ(res.kapacitas, megoldas.kapacitas);
    ASSERT_EQ(res.ar, megoldas.ar);
}