#include <gtest/gtest.h>
#include <iostream>
#include <cstdlib>

#define main main_0
#define free(a) free(a);printf("%p", a);
#include "../src/felszabadulas.c"
#undef free
#undef main

#include "../../tools.cpp"

void tesztel(int sorok, int oszlopok) {
    int** tomb = (int**) malloc(sorok * sizeof(int*));
    for (int i = 0; i < sorok; i++) {
        tomb[i] = (int*) malloc(oszlopok * sizeof(int));
    }

    char elvart[200000];
    char szoveg[20];
    elvart[0] = 0;
    for (int i = 0; i < sorok; i++) {
        sprintf(szoveg, "%p", tomb[i]);
        strcat(elvart, szoveg);
    }

    sprintf(szoveg, "%p", tomb);
    strcat(elvart, szoveg);

    char str[200000];
    IO("", felszabadulas(tomb, sorok, oszlopok), str)

    ASSERT_STREQ(elvart, str);
    printf("%d", strlen(elvart));
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(4, 4);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(4, 100);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(3, 1000000);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(10000, 4);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(10000, 100000);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(1, 512);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(512, 1);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    tesztel(11, 12);
}