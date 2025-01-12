#include <gtest/gtest.h>

#define main main_0
#include "../src/atlag.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("naplo.txt", "4 4 3 2 5");
    int db = 5;
    ASSERT_NEAR(atlag(db), 3.6, 0.0001);
    remove("naplo.txt");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("naplo.txt", "2");
    int db = 1;
    ASSERT_NEAR(atlag(db), 2, 0.0001);
    remove("naplo.txt");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("naplo.txt", "1 1 1 1 4 2");
    int db = 6;
    ASSERT_NEAR(atlag(db), 1 + 2.0/3.0, 0.0001);
    remove("naplo.txt");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    writeContentToFile("naplo.txt", "2 2 2 2 4 2");
    int db = 5;
    ASSERT_NEAR(atlag(db), 2.4, 0.0001);
    remove("naplo.txt");
}