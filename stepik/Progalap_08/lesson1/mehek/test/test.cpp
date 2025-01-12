#include <gtest/gtest.h>

#define main main_0
#include "../src/mehek.c"
#undef main

DoromboloMeh a {1, 2.4};
DoromboloMeh b {2, 2.94};
DoromboloMeh c {3, 1.15};
DoromboloMeh d {4, 1.64};
DoromboloMeh e {5, 0.75};
DoromboloMeh f {6, 2.92};
DoromboloMeh g {7, 1.08};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 3;
    int oszlopok = 4;
    int elvart = 0;

    DoromboloMeh* m1[] = { NULL, NULL, NULL, NULL };
    DoromboloMeh* m2[] = { NULL, NULL, NULL, NULL };
    DoromboloMeh* m3[] = { NULL, NULL, NULL, NULL };
    DoromboloMeh** mehek[] = {m1, m2, m3};

    int res = dorombolas(mehek, sorok, oszlopok);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 8;
    int oszlopok = 8;
    int elvart = 4;

    DoromboloMeh* m0[] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    DoromboloMeh* m1[] = { NULL, &a, NULL, NULL, NULL, NULL, NULL, NULL };
    DoromboloMeh* m2[] = { NULL, NULL, NULL, NULL, NULL, NULL, &e, NULL };
    DoromboloMeh* m3[] = { NULL, NULL, NULL, &b, &g, NULL, NULL, NULL };
    DoromboloMeh* m4[] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    DoromboloMeh* m5[] = { NULL, NULL, &c, NULL, NULL, NULL, NULL, &d };
    DoromboloMeh* m6[] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    DoromboloMeh* m7[] = { NULL, NULL, NULL, NULL, &f, NULL, NULL, NULL };
    DoromboloMeh** mehek[] = {m0, m1, m2, m3, m4, m5, m6, m7};

    int res = dorombolas(mehek, sorok, oszlopok);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 3;
    int oszlopok = 4;
    int elvart = 2;

    DoromboloMeh sa = {412, 2.06};
    DoromboloMeh sb = {41224, 1.01};
    DoromboloMeh sc = {300, 0.47};
    DoromboloMeh sd = {412, 0.29};
    DoromboloMeh se = {41, 1.11};

    DoromboloMeh* m0[] = { &sa, NULL, &sb, NULL };
    DoromboloMeh* m1[] = { NULL, &sc, NULL, &se };
    DoromboloMeh* m2[] = { NULL, NULL, &sd, NULL };
    DoromboloMeh** mehek[] = {m0, m1, m2};

    int res = dorombolas(mehek, sorok, oszlopok);
    ASSERT_EQ(res, elvart);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int sorok = 2;
    int oszlopok = 10;
    int elvart = 6;

    DoromboloMeh sa = {5121, 0.45};
    DoromboloMeh sb = {52414, 0.45};
    DoromboloMeh sc = {444, 0.34};
    DoromboloMeh sd = {12, 0.45};
    DoromboloMeh se = {55, 1.41};
    DoromboloMeh sf = {5, 0.9};
    DoromboloMeh sg = {2, 0.89};
    DoromboloMeh sh = {512, 9.02};


    DoromboloMeh* m0[] = { NULL, &sb, NULL, &sd, NULL, &sf, NULL, NULL, NULL, &sh };
    DoromboloMeh* m1[] = { &sa, NULL, &sc, NULL, &se, &sg, NULL, NULL, NULL, NULL };
    DoromboloMeh** mehek[] = {m0, m1};

    int res = dorombolas(mehek, sorok, oszlopok);
    ASSERT_EQ(res, elvart);
}