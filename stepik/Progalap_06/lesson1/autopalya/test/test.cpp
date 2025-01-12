#include <gtest/gtest.h>

#define main main_0
#include "../src/autopalya.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 100;
    int extra = 50;
    int honapok = 4;
    int elvart = 900;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 100;
    int extra = 50;
    int honapok = 27;
    int elvart = 166500;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 100;
    int extra = 0;
    int honapok = 200;
    int elvart = 20000;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 100;
    int extra = 1;
    int honapok = 200;
    int elvart = 1353300;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 10000;
    int extra = 10000;
    int honapok = 36;
    int elvart = 78060000;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 500000;
    int extra = 20000;
    int honapok = 85;
    int elvart = 2089300000;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 10000000;
    int extra = 1000000;
    int honapok = 15;
    int elvart = 710000000;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 100000000;
    int extra = 20000000;
    int honapok = 7;
    int elvart = 1820000000;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int alap = 1000;
    int extra = -10;
    int honapok = 12;
    int elvart = 9140;

    ASSERT_EQ(felujitas(alap, extra, honapok), elvart);
}