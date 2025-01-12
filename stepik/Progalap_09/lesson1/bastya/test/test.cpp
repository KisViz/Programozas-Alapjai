#include <gtest/gtest.h>

#define main main_0
#include "../src/bastya.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "info.txt";
    char szoveg[] = "0 1 0 0 0 0 0 0 0 0 0 0 0 1 0 1 0 1 0 1 0 2 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 1 0 0 0 0 0 0 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0";
    int elvart = 3;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "karika.txt";
    char szoveg[] = "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1";
    int elvart = 3;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "beka.txt";
    char szoveg[] = "1 0 0 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 0 0 1 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 1 0 0 0 0 2";
    int elvart = 2;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "info.txt";
    char szoveg[] = "1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 2";
    int elvart = 0;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "info.txt";
    char szoveg[] = "0 0 1 0 1 0 0 0 0 0 1 0 1 0 0 0 0 1 0 0 0 1 0 0 0 0 0 2 0 0 1 1 0 1 0 0 0 1 0 0 0 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 0 0 0";
    int elvart = 1;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "info.txt";
    char szoveg[] = "0 0 2 0 0 0 0 0 0 0 1 0 0 0 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 1 1 0 1 0 0 0 0 0 0 0 0 0 0 1 0 0";
    int elvart = 1;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "info.txt";
    char szoveg[] = "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0";
    int elvart = 1;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "info.txt";
    char szoveg[] = "1 0 1 0 1 0 0 1 0 0 0 0 0 0 0 0 1 0 1 0 1 0 0 1 0 0 0 0 0 0 0 0 1 0 1 0 1 0 0 1 0 0 0 0 0 0 1 0 1 0 1 0 1 0 2 0 0 0 0 0 0 0 1 0";
    int elvart = 3;

    writeContentToFile(fajlnev, szoveg);
    int res = strategia(fajlnev);
    ASSERT_EQ(res, elvart);
}