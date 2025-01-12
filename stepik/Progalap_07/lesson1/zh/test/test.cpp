#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/zh.c"
#undef main

Zh zh1 = {"Janika", 50};
Zh zh2 = {"Davidka", 44};
Zh zh3 = {"Jozsika", 55};
Zh zh4 = {"Erno", 0};
Zh zh5 = {"Petruska", 25};
Zh zh6 = {"Anitacska", 72};
Zh zh7 = {"Orsika", 53};
Zh zh8 = {"Vandor", 1};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zh* zh[] = {&zh1, &zh2, NULL};
    double elvart = 47.0;

    double res = atlag(zh);
    ASSERT_NEAR(res, elvart, 0.0001f);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zh* zh[] = {&zh1, &zh2, &zh3, &zh4, &zh5, &zh6, NULL};
    double elvart = 41.0;

    double res = atlag(zh);
    ASSERT_NEAR(res, elvart, 0.0001f);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zh* zh[] = {&zh7, NULL};
    double elvart = 53.0;

    double res = atlag(zh);
    ASSERT_NEAR(res, elvart, 0.0001f);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zh* zh[] = {&zh1, &zh2, &zh6, NULL};
    double elvart = 55.33333333;

    double res = atlag(zh);
    ASSERT_NEAR(res, elvart, 0.0001f);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zh* zh[] = {&zh1, &zh2, &zh4, &zh8, NULL};
    double elvart = 23.75;

    double res = atlag(zh);
    ASSERT_NEAR(res, elvart, 0.0001f);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Zh* zh[] = {&zh1, &zh2, &zh7, &zh8, NULL};
    double elvart = 37.0;

    double res = atlag(zh);
    ASSERT_NEAR(res, elvart, 0.0001f);
}