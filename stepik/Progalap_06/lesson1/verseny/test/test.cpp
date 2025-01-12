#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/verseny.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "info.txt";

    writeContentToFile(filename, "Marika");
    char str[1000];
    IO("", gyoztes(filename), str);
    ASSERT_STREQ(str, "Marika\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "info.txt";

    writeContentToFile(filename, "Monika");
    char str[1000];
    IO("", gyoztes(filename), str);
    ASSERT_STREQ(str, "Monika\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "gyoztes.txt";

    writeContentToFile(filename, "Peter");
    char str[1000];
    IO("", gyoztes(filename), str);
    ASSERT_STREQ(str, "Peter\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "eredmeny.csv";

    writeContentToFile(filename, "Otto");
    char str[1000];
    IO("", gyoztes(filename), str);
    ASSERT_STREQ(str, "Otto\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "megoldas.be";

    writeContentToFile(filename, "David");
    char str[1000];
    IO("", gyoztes(filename), str);
    ASSERT_STREQ(str, "David\n");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "fajl.ki";

    writeContentToFile(filename, "Bence");
    char str[1000];
    IO("", gyoztes(filename), str);
    ASSERT_STREQ(str, "Bence\n");
}
