#include <gtest/gtest.h>

#define main main_0
#include "../src/olvasas.c"
#undef main

Konyv k1 = {"cim1", "iro1", 55};
Konyv k2 = {"cim2", "iro2", 44};
Konyv k3 = {"cim3", "iro3", 15};
Konyv k4 = {"cim4", "iro2", 8};
Konyv k5 = {"a kiscica kalandozasai a matematika birodalmaban Danteval a koltovel", "Nem tudni de valaki nagyon okos lehetett", 130};
Konyv k6 = {"cim5", "iro2", 110};
Konyv k7 = {"cim6", "iro3", 52};
Konyv k8 = {"Recept", "Irenke neni", 1};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Konyv konyvek[] = {k1, k2, k3};
    int db = 3;
    int res = 114;

    int result = olvasasiMennyiseg(konyvek, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Konyv konyvek[] = {k3, k1, k2};
    int db = 3;
    int res = 114;

    int result = olvasasiMennyiseg(konyvek, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Konyv konyvek[] = {k8};
    int db = 1;
    int res = 1;

    int result = olvasasiMennyiseg(konyvek, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Konyv konyvek[] = {k7};
    int db = 1;
    int res = 52;

    int result = olvasasiMennyiseg(konyvek, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Konyv konyvek[] = {k4, k5, k6, k7};
    int db = 4;
    int res = 300;

    int result = olvasasiMennyiseg(konyvek, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Konyv konyvek[] = {k1, k5, k7, k8};
    int db = 4;
    int res = 238;

    int result = olvasasiMennyiseg(konyvek, db);
    ASSERT_EQ(res, result);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Konyv konyvek[] = {k1, k2, k3, k4, k5, k6, k7, k8};
    int db = 8;
    int res = 415;

    int result = olvasasiMennyiseg(konyvek, db);
    ASSERT_EQ(res, result);
}