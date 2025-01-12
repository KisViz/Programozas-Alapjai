#include <gtest/gtest.h>

#define main main_0
#include "../src/ellenorzes.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {4, 2, 1, 7, 4, 3, 4, 0};
    int elvartOsszeg = 25; int osszeg = 25;
    int elvartMax = 7; int max = 7;
    int elvartEredmeny = 0;

    int visszaadottEredmeny = ellenorzes(tomb, &osszeg, &max);
    ASSERT_EQ(visszaadottEredmeny, elvartEredmeny);
    ASSERT_EQ(elvartOsszeg, osszeg);
    ASSERT_EQ(elvartMax, max);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {4, 2, 1, 7, 4, 3, 4, 0};
    int elvartOsszeg = 25; int osszeg = 24;
    int elvartMax = 7; int max = 7;
    int elvartEredmeny = 1;

    int visszaadottEredmeny = ellenorzes(tomb, &osszeg, &max);
    ASSERT_EQ(visszaadottEredmeny, elvartEredmeny);
    ASSERT_EQ(elvartOsszeg, osszeg);
    ASSERT_EQ(elvartMax, max);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {4, 2, 1, 7, 4, 3, 4, 0};
    int elvartOsszeg = 25; int osszeg = 25;
    int elvartMax = 7; int max = 5;
    int elvartEredmeny = 2;

    int visszaadottEredmeny = ellenorzes(tomb, &osszeg, &max);
    ASSERT_EQ(visszaadottEredmeny, elvartEredmeny);
    ASSERT_EQ(elvartOsszeg, osszeg);
    ASSERT_EQ(elvartMax, max);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {4, 2, 1, 7, 4, 3, 4, 0};
    int elvartOsszeg = 25; int osszeg = 24;
    int elvartMax = 7; int max = 5;
    int elvartEredmeny = 3;

    int visszaadottEredmeny = ellenorzes(tomb, &osszeg, &max);
    ASSERT_EQ(visszaadottEredmeny, elvartEredmeny);
    ASSERT_EQ(elvartOsszeg, osszeg);
    ASSERT_EQ(elvartMax, max);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {3, 9, 3, 3, 5, 3, 10, 0, 3, 2, 0};
    int elvartOsszeg = 36; int osszeg = 360;
    int elvartMax = 10; int max = 9;
    int elvartEredmeny = 3;

    int visszaadottEredmeny = ellenorzes(tomb, &osszeg, &max);
    ASSERT_EQ(visszaadottEredmeny, elvartEredmeny);
    ASSERT_EQ(elvartOsszeg, osszeg);
    ASSERT_EQ(elvartMax, max);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {5, 0};
    int elvartOsszeg = 5; int osszeg = 5;
    int elvartMax = 5; int max = 0;
    int elvartEredmeny = 2;

    int visszaadottEredmeny = ellenorzes(tomb, &osszeg, &max);
    ASSERT_EQ(visszaadottEredmeny, elvartEredmeny);
    ASSERT_EQ(elvartOsszeg, osszeg);
    ASSERT_EQ(elvartMax, max);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {0};
    int elvartOsszeg = 0; int osszeg = 0;
    int elvartMax = 0; int max = 0;
    int elvartEredmeny = 0;

    int visszaadottEredmeny = ellenorzes(tomb, &osszeg, &max);
    ASSERT_EQ(visszaadottEredmeny, elvartEredmeny);
    ASSERT_EQ(elvartOsszeg, osszeg);
    ASSERT_EQ(elvartMax, max);
}