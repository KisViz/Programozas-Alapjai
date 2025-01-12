#include <gtest/gtest.h>

#define main main_0
#include "../src/titkositas.c"
#undef main

#include "../../tools.cpp"

TEST(Titkositas, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {4, 3, 1, 5, 2, 3};
    int elvart[] = {4, 7, 4, 6, 7, 5};
    int db = 6;
    int* res = titkositas(szamok, db);

    ASSERT_ARRAY_EQ(elvart, res, db);
    free(res);
}

TEST(Titkositas, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {7, 7, 3, 1, 1, 4, 2, 0, 1};
    int elvart[] = {7, 14, 10, 4, 2, 5, 6, 2, 1};
    int db = 9;
    int* res = titkositas(szamok, db);

    ASSERT_ARRAY_EQ(elvart, res, db);
    free(res);
}

TEST(Megfejtes, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {1, 1, 4, 10, 10, 7, 7, 9, 9};
    int elvart[] = {1, 0, 4, 6, 4, 3, 4, 5, 4};
    int db = 9;
    int* res = megfejtes(szamok, db);

    ASSERT_ARRAY_EQ(elvart, res, db);
    free(res);
}

TEST(Megfejtes, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {7, 12, 9, 9, 9, 14, 8, -7, -3};
    int elvart[] = {7, 5, 4, 5, 4, 10, -2, -5, 2};
    int db = 9;
    int* res = megfejtes(szamok, db);

    ASSERT_ARRAY_EQ(elvart, res, db);
    free(res);
}

TEST(Egyuttes, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {8, 3, 5, 3, 0, 7, 4, 3, -3};
    int elvart[] = {8, 3, 5, 3, 0, 7, 4, 3, -3};
    int db = 9;
    int* res = titkositas(szamok, db);
    int* res2 = megfejtes(res, db);

    ASSERT_ARRAY_EQ(elvart, res2, db);
    free(res);
    free(res2);
}