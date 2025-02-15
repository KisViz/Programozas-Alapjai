#include <gtest/gtest.h>

#define main main_0
#include "../src/templom.c"
#undef main

#include "../../tools.cpp"

Ember e1 = {"cica", 1990};
Ember e2 = {"lovacska", 1991};
Ember e3 = {"Marika", 1994};
Ember e4 = {"Joco", 1890};
Ember e5 = {"Endre", 1978};
Ember e6 = {"Anett", 1986};
Ember e7 = {"Gabi", 2011};
Ember e8 = {"Peter", 2000};
Ember e9 = {"Joco", 1890};
Ember e10 = {"Akos", 1718};

Templom t1 = {"Nagy templom", 3};
Templom t2 = {"Masik templom", 4};
Templom t3 = {"Kis templom", 1000};
Templom t4 = {"Szep templom", 21};
Templom t5 = {"Bejarat", 5};

bool operator==(const Ember& e1, const Ember& e2) {
    return strcmp(e1.nev, e2.nev) == 0 && e1.szuletesi_evszam == e2.szuletesi_evszam;
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Varos v1;
    v1.templom = &t1;
    v1.emberek = (Ember*) malloc(sizeof(Ember) * 3);
    v1.emberek[0] = e1;
    v1.emberek[1] = e2;
    v1.emberek[2] = e3;
    v1.lakossag = 3;

    Varos v2;
    v2.templom = &t2;
    v2.emberek = (Ember*) malloc(sizeof(Ember) * 2);
    v2.emberek[0] = e4;
    v2.emberek[1] = e5;
    v2.lakossag = 2;

    Varos* varosok[] = {&v1, &v2, NULL};
    Ember elvartEmberek[] = {e1, e2, e3, e4, e5};

    Varos result = varosEgyesites(varosok);

    ASSERT_EQ(result.lakossag, 5);
    ASSERT_ARRAY_EQ(result.emberek, elvartEmberek, 5);
    ASSERT_EQ(result.templom, &t2);

    free(v1.emberek);
    free(v2.emberek);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Varos v1;
    v1.templom = NULL;
    v1.emberek = (Ember*) malloc(sizeof(Ember) * 1);
    v1.emberek[0] = e2;
    v1.lakossag = 1;

    Varos v2;
    v2.templom = NULL;
    v2.emberek = (Ember*) malloc(sizeof(Ember) * 2);
    v2.emberek[0] = e7;
    v2.emberek[1] = e4;
    v2.lakossag = 2;

    Varos v3;
    v3.templom = NULL;
    v3.emberek = (Ember*) malloc(sizeof(Ember) * 3);
    v3.emberek[0] = e5;
    v3.emberek[1] = e8;
    v3.emberek[2] = e1;
    v3.lakossag = 3;

    Varos* varosok[] = {&v1, &v2, &v3, NULL};
    Ember elvartEmberek[] = {e2, e7, e4, e5, e8, e1};

    Varos result = varosEgyesites(varosok);

    ASSERT_EQ(result.lakossag, 6);
    ASSERT_ARRAY_EQ(result.emberek, elvartEmberek, 6);
    ASSERT_EQ(result.templom, nullptr);

    free(v1.emberek);
    free(v2.emberek);
    free(v3.emberek);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Varos v1;
    v1.templom = NULL;
    v1.emberek = (Ember*) malloc(sizeof(Ember) * 3);
    v1.emberek[0] = e10;
    v1.lakossag = 1;

    Varos v2;
    v2.templom = NULL;
    v2.emberek = (Ember*) malloc(sizeof(Ember) * 2);
    v2.emberek[0] = e7;
    v2.emberek[1] = e8;
    v2.lakossag = 2;

    Varos v3;
    v3.templom = &t3;
    v3.emberek = (Ember*) malloc(sizeof(Ember) * 0);
    v3.lakossag = 0;

    Varos v4;
    v4.templom = NULL;
    v4.emberek = (Ember*) malloc(sizeof(Ember) * 2);
    v4.emberek[0] = e5;
    v4.emberek[1] = e1;
    v4.lakossag = 2;

    Varos* varosok[] = {&v1, &v2, &v3, &v4, NULL};
    Ember elvartEmberek[] = {e10, e7, e8, e5, e1};

    Varos result = varosEgyesites(varosok);

    ASSERT_EQ(result.lakossag, 5);
    ASSERT_ARRAY_EQ(result.emberek, elvartEmberek, 5);
    ASSERT_EQ(result.templom, &t3);

    free(v1.emberek);
    free(v2.emberek);
    free(v3.emberek);
    free(v4.emberek);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Varos v1;
    v1.templom = &t1;
    v1.emberek = (Ember*) malloc(sizeof(Ember) * 5);
    v1.emberek[0] = e10;
    v1.emberek[1] = e1;
    v1.emberek[2] = e3;
    v1.emberek[3] = e4;
    v1.emberek[4] = e2;
    v1.lakossag = 5;

    Varos v2;
    v2.templom = NULL;
    v2.emberek = (Ember*) malloc(sizeof(Ember) * 1);
    v2.emberek[0] = e7;
    v2.lakossag = 1;

    Varos v3;
    v3.templom = &t3;
    v3.emberek = (Ember*) malloc(sizeof(Ember) * 1);
    v3.emberek[0] = e5;
    v3.lakossag = 1;

    Varos v4;
    v4.templom = &t2;
    v4.emberek = (Ember*) malloc(sizeof(Ember) * 3);
    v4.emberek[0] = e9;
    v4.emberek[1] = e6;
    v4.emberek[2] = e8;
    v4.lakossag = 3;

    Varos* varosok[] = {&v1, &v2, &v3, &v4, NULL};
    Ember elvartEmberek[] = {e10, e1, e3, e4, e2, e7, e5, e9, e6, e8};

    Varos result = varosEgyesites(varosok);

    ASSERT_EQ(result.lakossag, 10);
    ASSERT_ARRAY_EQ(result.emberek, elvartEmberek, 10);
    ASSERT_EQ(result.templom, &t3);

    free(v1.emberek);
    free(v2.emberek);
    free(v3.emberek);
    free(v4.emberek);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Varos v1;
    v1.templom = &t1;
    v1.lakossag = 0;

    Varos v2;
    v2.templom = NULL;
    v2.lakossag = 0;

    Varos v3;
    v3.templom = &t5;
    v3.lakossag = 0;

    Varos v4;
    v4.templom = &t2;
    v4.lakossag = 0;

    Varos v5;
    v5.templom = NULL;
    v5.lakossag = 0;

    Varos* varosok[] = {&v1, &v2, &v3, &v4, &v5, NULL};

    Varos result = varosEgyesites(varosok);

    ASSERT_EQ(result.lakossag, 0);
    ASSERT_EQ(result.templom, &t5);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Varos v1;
    v1.templom = &t1;
    v1.emberek = (Ember*) malloc(sizeof(Ember) * 5);
    v1.emberek[0] = e10;
    v1.emberek[1] = e7;
    v1.emberek[2] = e3;
    v1.emberek[3] = e4;
    v1.emberek[4] = e8;
    v1.lakossag = 5;

    Varos* varosok[] = {&v1, NULL};
    Ember elvartEmberek[] = {e10, e7, e3, e4, e8};

    Varos result = varosEgyesites(varosok);

    ASSERT_EQ(result.lakossag, 5);
    ASSERT_ARRAY_EQ(result.emberek, elvartEmberek, 5);
    ASSERT_EQ(result.templom, &t1);

    free(v1.emberek);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Varos v1;
    v1.templom = NULL;
    v1.emberek = (Ember*) malloc(sizeof(Ember) * 5);
    v1.emberek[0] = e10;
    v1.emberek[1] = e7;
    v1.emberek[2] = e3;
    v1.emberek[3] = e4;
    v1.emberek[4] = e8;
    v1.lakossag = 5;

    Varos* varosok[] = {&v1, NULL};
    Ember elvartEmberek[] = {e10, e7, e3, e4, e8};

    Varos result = varosEgyesites(varosok);

    ASSERT_EQ(result.lakossag, 5);
    ASSERT_ARRAY_EQ(result.emberek, elvartEmberek, 5);
    ASSERT_EQ(result.templom, nullptr);

    free(v1.emberek);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const Varos v1 = {};

    const Varos* varosok[] = {&v1, NULL};
    Ember elvartEmberek[] = {e10, e7, e3, e4, e8};

    Varos result = varosEgyesites(varosok);
}