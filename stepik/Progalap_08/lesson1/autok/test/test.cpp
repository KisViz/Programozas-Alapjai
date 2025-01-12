#include <gtest/gtest.h>

#define main main_0
#include "../src/autok.c"
#undef main

const Auto* createAuto(int sebesseg, double gyorsulas) {
    Auto* car = (Auto*) malloc(sizeof(Auto));
    car->maximalisSebesseg = sebesseg;
    car->gyorsulas = gyorsulas;
    return car;
}

const Auto** createAutoArray(int darab) {
    const Auto** cars = (const Auto**) malloc(sizeof(Auto*) * darab);
    return cars;
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Auto* a1 = createAuto(3, 5.5);
    const Auto* a2 = createAuto(4, 5.6);
    const Auto* a3 = createAuto(2, 5.2);
    const Auto** autok = createAutoArray(4);
    autok[0] = a1; autok[1] = a2; autok[2] = a3; autok[3] = NULL;
    const Auto* res = leggyorsabb(autok);
    ASSERT_EQ(res, a2);
    free((void *) a1);
    free((void *) a2);
    free((void *) a3);
    free(autok);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Auto* a1 = createAuto(3, 5.5);
    const Auto* a2 = createAuto(4, 5.6);
    const Auto* a3 = createAuto(11, 5.2);
    const Auto** autok = createAutoArray(4);
    autok[0] = a1; autok[1] = a2; autok[2] = a3; autok[3] = NULL;
    const Auto* res = leggyorsabb(autok);
    ASSERT_EQ(res, a3);
    free((void *) a1);
    free((void *) a2);
    free((void *) a3);
    free(autok);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Auto* a1 = createAuto(30, 73.1);
    const Auto* a2 = createAuto(22, 110.2);
    const Auto* a3 = createAuto(31, 0.01);
    const Auto* a4 = createAuto(33, 66.43);
    const Auto** autok = createAutoArray(5);
    autok[0] = a1; autok[1] = a2; autok[2] = a3; autok[3] = a4; autok[4] = NULL;
    const Auto* res = leggyorsabb(autok);
    ASSERT_EQ(res, a4);
    free((void *) a1);
    free((void *) a2);
    free((void *) a3);
    free((void *) a4);
    free(autok);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Auto* a1 = createAuto(3, 5.5);
    const Auto** autok = createAutoArray(2);
    autok[0] = a1; autok[1] = NULL;
    const Auto* res = leggyorsabb(autok);
    ASSERT_EQ(res, a1);
    free((void *) a1);
    free(autok);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Auto** autok = createAutoArray(1);
    autok[0] = NULL;
    const Auto* res = leggyorsabb(autok);
    ASSERT_EQ(res, nullptr);
    free(autok);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Auto* a1 = createAuto(5, 5.5);
    const Auto* a2 = createAuto(4, 5.6);
    const Auto* a3 = createAuto(6, 5.2);
    const Auto* a4 = createAuto(2, 5.5);
    const Auto* a5 = createAuto(5, 5.6);
    const Auto* a6 = createAuto(300, 300);
    const Auto** autok = createAutoArray(7);
    autok[0] = a1; autok[1] = a2; autok[2] = a3; autok[3] = a4; autok[4] = a5;  autok[5] = NULL; autok[6] = a6;
    const Auto* res = leggyorsabb(autok);
    ASSERT_EQ(res, a3);
    free((void *) a1);
    free((void *) a2);
    free((void *) a3);
    free((void *) a4);
    free((void *) a5);
    free((void *) a6);
    free(autok);
}