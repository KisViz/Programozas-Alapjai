#include <gtest/gtest.h>

#define main main_0
#include "../src/szelekcio.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt,01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 3;
    int oszlopok = 4;

    double s1[] = {3.2, 4.4, 7.5, 3.3};
    double s2[] = {1.5, 10.7, 2.3, 5.3};
    double s3[] = {10.1, 9.9, 11.0, 10.4};
    double* elvart = s2;

    double* tomb[] = {s1, s2, s3};
    double* res = szelekcio(tomb, sorok, oszlopok);

    ASSERT_EQ(res, elvart);
    ASSERT_ARRAY_EQ(res, elvart, oszlopok);
}

TEST(Teszt,02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 1;
    int oszlopok = 6;

    double s1[] = {1.1, 1.1, 1.1, 1.1, 1.1, 1.1};
    double* elvart = s1;

    double* tomb[] = {s1};
    double* res = szelekcio(tomb, sorok, oszlopok);

    ASSERT_EQ(res, elvart);
    ASSERT_ARRAY_EQ(res, elvart, oszlopok);
}

TEST(Teszt,03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 3;
    int oszlopok = 5;

    double s1[] = {-4.2, -3.3, -5.5, -4.3, -5.0};
    double s2[] = {4.0, 3.4, 3.6, 3.3, 3.5};
    double s3[] = {100.0, 100.1, 100.2, 99.99, 100.11};
    double* elvart = s1;

    double* tomb[] = {s1, s2, s3};
    double* res = szelekcio(tomb, sorok, oszlopok);

    ASSERT_EQ(res, elvart);
    ASSERT_ARRAY_EQ(res, elvart, oszlopok);
}

TEST(Teszt,04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 7;
    int oszlopok = 3;

    double s1[] = {3, 5, 4};
    double s2[] = {3.2, 5.1, 3.3};
    double s3[] = {6.4, 6.4, 6.6};
    double s4[] = {2100000000, 2100000001, 2100000002};
    double s5[] = {-2100000000, -2100000001, -2100000002};
    double s6[] = {0, 2.1, 1.61};
    double s7[] = {0, 2.05, 2.05};
    double* elvart = s6;

    double* tomb[] = {s1, s2, s3, s4, s5, s6, s7};
    double* res = szelekcio(tomb, sorok, oszlopok);

    ASSERT_EQ(res, elvart);
    ASSERT_ARRAY_EQ(res, elvart, oszlopok);
}