#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/legjobb.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char file[] = "minta.txt";
    char str[] = "5 8 11 4 2 55 21 9 10";
    int elvart = 55;

    writeContentToFile(file, str);
    int eredmeny = legjobb(file);

    ASSERT_EQ(elvart, eredmeny);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char file[] = "zheredmenyek.txt";
    char str[] = "5 5 2 5 4 2 2 5 4 0 0 5 0 5 0";
    int elvart = 5;

    writeContentToFile(file, str);
    int eredmeny = legjobb(file);

    ASSERT_EQ(elvart, eredmeny);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char file[] = "megoldas.txt";
    char str[] = "2 5 4 0 0 2 6 1 1";
    int elvart = 6;

    writeContentToFile(file, str);
    int eredmeny = legjobb(file);

    ASSERT_EQ(elvart, eredmeny);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char file[] = "results.csv";
    char str[] = "7 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 10";
    int elvart = 10;

    writeContentToFile(file, str);
    int eredmeny = legjobb(file);

    ASSERT_EQ(elvart, eredmeny);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char file[] = "minta.txt";
    char str[] = "0 0 0 0 0 0 0 0 0 0 0 1 0";
    int elvart = 1;

    writeContentToFile(file, str);
    int eredmeny = legjobb(file);

    ASSERT_EQ(elvart, eredmeny);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char file[] = "pontszamok.be";
    char str[] = "105";
    int elvart = 105;

    writeContentToFile(file, str);
    int eredmeny = legjobb(file);

    ASSERT_EQ(elvart, eredmeny);
}