#include <gtest/gtest.h>
#include <cstring>

#define main main_0
#include "../src/telefon.c"
#undef main

Alkalmazas a1 = {"discord", 13, 64.33};
Alkalmazas a2 = {"fortnajt", 300, 3131.11};
Alkalmazas a3 = {"messenger", 87, 64.34342};
Alkalmazas a4 = {"emotes311", 1, 1.421};
Alkalmazas a5 = {"coospace pro", 5, 42.21};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Telefon t;
    strcpy(t.gyarto, "Samsung");
    t.kijelzoAtmero = 6.66;
    t.alkalmazasok[0] = a1;
    t.alkalmazasok[1] = a2;
    t.alkalmazasok[2] = a4;

    ASSERT_STREQ(t.gyarto, "Samsung");
    ASSERT_NEAR(t.kijelzoAtmero, 6.66, 0.0001);
    ASSERT_EQ(t.alkalmazasok[0].verzioszam, a1.verzioszam);
    ASSERT_NEAR(t.alkalmazasok[1].meret, a2.meret, 0.001);
    ASSERT_STREQ(t.alkalmazasok[2].nev, a4.nev);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Telefon t;
    strcpy(t.gyarto, "MinimalPhone1900");
    t.kijelzoAtmero = 1.35;
    t.alkalmazasok[0] = a3;
    t.alkalmazasok[1] = a4;

    ASSERT_STREQ(t.gyarto, "MinimalPhone1900");
    ASSERT_NEAR(t.kijelzoAtmero, 1.35, 0.0001);
    ASSERT_EQ(t.alkalmazasok[1].verzioszam, a4.verzioszam);
    ASSERT_NEAR(t.alkalmazasok[0].meret, a3.meret, 0.001);
}