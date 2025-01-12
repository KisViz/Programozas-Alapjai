#include <gtest/gtest.h>

#define main main_0
#include "../src/pixelek.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a = pixelszam("../../../lesson1/pixelek/macska.pgm");
    ASSERT_EQ(a, 749000);

    FILE* f = fopen("../../../lesson1/pixelek/macska.pgm", "r");
    if (f == NULL) {
        fprintf(stderr, "Sajnos a teszteleshez szukseges kepfajl nem talalhato. A reset-tel a feladatot az eredeti allapotba visszaallithatod.");
        FAIL();
    }
    fclose(f);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int b = pixelszam("macska.pgm");
    ASSERT_EQ(b, 0);

    FILE* f = fopen("../../../lesson1/pixelek/macska.pgm", "r");
    if (f == NULL) {
        fprintf(stderr, "Sajnos a teszteleshez szukseges kepfajl nem talalhato. A reset-tel a feladatot az eredeti allapotba visszaallithatod.");
        FAIL();
    }
    fclose(f);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int c = pixelszam("../../../lesson1/pixelek/tik.pgm");
    ASSERT_EQ(c, 336960);

    FILE* f = fopen("../../../lesson1/pixelek/macska.pgm", "r");
    if (f == NULL) {
        fprintf(stderr, "Sajnos a teszteleshez szukseges kepfajl nem talalhato. A reset-tel a feladatot az eredeti allapotba visszaallithatod.");
        FAIL();
    }
    fclose(f);
}