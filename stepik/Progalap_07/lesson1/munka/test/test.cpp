#include <gtest/gtest.h>

#define main main_0
#include "../src/munka.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char auzenet[] = "ez az uzenet";
    char euzenet[] = "ez az uzenet";
    char nev[] = "janos";
    char filename[] = "janos.txt";

    writeContentToFile(filename, euzenet);
    uzenet(nev, auzenet);

    char str[100];
    FILE* file = fopen(filename, "r");
    readstring(file, str);
    ASSERT_STREQ(str, euzenet);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char auzenet[] = "ez egy jo hosszu szoveg. Ez kerulne ide most.\nOK\n";
    char euzenet[] = "ez egy jo hosszu szoveg. Ez kerulne ide most.\nOK\n";
    char nev[] = "otto";
    char filename[] = "otto.txt";

    writeContentToFile(filename, euzenet);
    uzenet(nev, auzenet);

    char str[100];
    FILE* file = fopen(filename, "r");
    readstring(file, str);
    ASSERT_STREQ(str, euzenet);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char auzenet[] = "jo";
    char euzenet[] = "jo";
    char nev[] = "peti_neve";
    char filename[] = "peti_neve.txt";

    writeContentToFile(filename, euzenet);
    uzenet(nev, auzenet);

    char str[100];
    FILE* file = fopen(filename, "r");
    readstring(file, str);
    ASSERT_STREQ(str, euzenet);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char auzenet[] = "nagyszeru egy ketto harom";
    char euzenet[] = "nagyszeru egy ketto harom";
    char nev[] = "anna";
    char filename[] = "anna.txt";

    writeContentToFile(filename, euzenet);
    uzenet(nev, auzenet);

    char str[100];
    FILE* file = fopen(filename, "r");
    readstring(file, str);
    ASSERT_STREQ(str, euzenet);
}