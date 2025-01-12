#include <gtest/gtest.h>

#define main main_0
#include "../src/szorzatok.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int tomb[] = {
            3, 4, 2, 5,
            3, 7, 1, 2,
            2, 3, 5, 4
    };
    int sorok = 3;
    int oszlopok = 4;
    int elvart[] = {18, 84, 10, 40};

    int* res = szorzatok(tomb, sorok, oszlopok);
    ASSERT_ARRAY_EQ(elvart, res, oszlopok);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int tomb[] = {
            5, 2, 2, 4,
            4, 6, 3, 1,
            5, 3, 8, 1
    };
    int sorok = 3;
    int oszlopok = 4;
    int elvart[] = {100, 36, 48, 4};

    int* res = szorzatok(tomb, sorok, oszlopok);
    ASSERT_ARRAY_EQ(elvart, res, oszlopok);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int tomb[] = {
            2, 3, 2, 1,
            4, 4, 2, 6
    };
    int sorok = 2;
    int oszlopok = 4;
    int elvart[] = {8, 12, 4, 6};

    int* res = szorzatok(tomb, sorok, oszlopok);
    ASSERT_ARRAY_EQ(elvart, res, oszlopok);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const int tomb[] = {
            5, 4, 2, 6, 4, 3, 2, 1, 7, 5, 3,
            2, 4, 4, 7, 5, 4, 5, 4, 4, 8, 7,
            1, 2, 1, 1, 5, 4, 3, 2, 3, 5, 6,
            2, 5, 3, 7, 4, 5, 3, 2, 1, 5, 5
    };
    int sorok = 4;
    int oszlopok = 11;
    int elvart[] = {20, 160, 24, 294, 400, 240, 90, 16, 84, 1000, 630};

    int* res = szorzatok(tomb, sorok, oszlopok);
    ASSERT_ARRAY_EQ(elvart, res, oszlopok);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[100000];
    int sorok = 100000;
    int oszlopok = 1;

    for (int i = 0; i < 100000; i++) {
        tomb[i] = 1;
    }

    int elvart[] = {1};

    int* res = szorzatok(tomb, sorok, oszlopok);
    ASSERT_ARRAY_EQ(elvart, res, oszlopok);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[100000];
    int sorok = 1;
    int oszlopok = 100000;

    for (int i = 0; i < 100000; i++) {
        tomb[i] = i;
    }

    int* res = szorzatok(tomb, sorok, oszlopok);

    for (int i = 0; i < 100000; i++) {
        ASSERT_EQ(res[i], i);
    }

}