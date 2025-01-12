#include <gtest/gtest.h>

#define main main_0
#include "../src/ertekeles.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "AAAAAA";
    int pontszam = 5;
    int eredmeny = pontszam > 100 ? 100 : pontszam < 0 ? 0 : pontszam;

    Ertekeles e = ertekel(str, pontszam);
    ASSERT_STREQ(e.neptunkod, "AAAAAA");
    ASSERT_EQ(e.pontszam, eredmeny);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "BAFVEW";
    int pontszam = 88;
    int eredmeny = pontszam > 100 ? 100 : pontszam < 0 ? 0 : pontszam;

    Ertekeles e = ertekel(str, pontszam);
    ASSERT_STREQ(e.neptunkod, "BAFVEW");
    ASSERT_EQ(e.pontszam, eredmeny);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "WZEDVS";
    int pontszam = 100;
    int eredmeny = pontszam > 100 ? 100 : pontszam < 0 ? 0 : pontszam;

    Ertekeles e = ertekel(str, pontszam);
    ASSERT_STREQ(e.neptunkod, "WZEDVS");
    ASSERT_EQ(e.pontszam, eredmeny);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "QQQQQQ";
    int pontszam = 0;
    int eredmeny = pontszam > 100 ? 100 : pontszam < 0 ? 0 : pontszam;

    Ertekeles e = ertekel(str, pontszam);
    ASSERT_STREQ(e.neptunkod, "QQQQQQ");
    ASSERT_EQ(e.pontszam, eredmeny);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "BABABA";
    int pontszam = -3;
    int eredmeny = pontszam > 100 ? 100 : pontszam < 0 ? 0 : pontszam;

    Ertekeles e = ertekel(str, pontszam);
    ASSERT_STREQ(e.neptunkod, "BABABA");
    ASSERT_EQ(e.pontszam, eredmeny);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "NANANA";
    int pontszam = 104;
    int eredmeny = pontszam > 100 ? 100 : pontszam < 0 ? 0 : pontszam;

    Ertekeles e = ertekel(str, pontszam);
    ASSERT_STREQ(e.neptunkod, "NANANA");
    ASSERT_EQ(e.pontszam, eredmeny);
}