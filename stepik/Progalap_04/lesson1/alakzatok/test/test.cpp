#include <gtest/gtest.h>

#define main main_0
#include "../src/alakzatok.c"
#undef main

Negyzet n1 = {5};
Negyzet n2 = {7.5};
Negyzet n3 = {0.01};

Kor k1 = {6};
Kor k2 = {5.52};
Kor k3 = {0.054};

Haromszog h1 = {2, 3, 4};
Haromszog h2 = {3.3, 3.5, 4.1};
Haromszog h3 = {0.01, 0.015, 0.011};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Negyzet n = n1;
    Kor k = k1;
    Haromszog h = h1;
    double result = 56.17907139;

    double res = teruletOsszeg(n, k, h);
    ASSERT_NEAR(res, result, 0.000001);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Negyzet n = n1;
    Kor k = k1;
    Haromszog h = h2;
    double result = 58.82828011;

    double res = teruletOsszeg(n, k, h);
    ASSERT_NEAR(res, result, 0.000001);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Negyzet n = n2;
    Kor k = k3;
    Haromszog h = h1;
    double result = 59.15702773;

    double res = teruletOsszeg(n, k, h);
    ASSERT_NEAR(res, result, 0.000001);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Negyzet n = n3;
    Kor k = k3;
    Haromszog h = h3;
    double result = 0.002445211;

    double res = teruletOsszeg(n, k, h);
    ASSERT_NEAR(res, result, 0.000001);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Negyzet n = n1;
    Kor k = k2;
    Haromszog h = h2;
    double result = 54.48534243;

    double res = teruletOsszeg(n, k, h);
    ASSERT_NEAR(res, result, 0.000001);
}
