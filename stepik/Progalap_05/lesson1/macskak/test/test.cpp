#include <gtest/gtest.h>

#define main main_0
#include "../src/macskak.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, macskatLetrehoz) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "cirmi";
    Macska m = macskatLetrehoz(str, 3.3, -1);
    ASSERT_STREQ(str, m.nev);
    ASSERT_NEAR(3.3, m.eletkor, 0.0001);
    ASSERT_EQ(4294967295, m.nyavogasSzam);

    char str2[] = "cirmi2";
    m = macskatLetrehoz(str2, 11, 31);
    ASSERT_STREQ(str2, m.nev);
    ASSERT_NEAR(11, m.eletkor, 0.0001);
    ASSERT_EQ(31, m.nyavogasSzam);
}

TEST(Teszt, kiir) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Macska m = {"cirmi2", 3.3, 1000};
    Macska m2 = {"cirmi3", 6.322, 22};

    char str[2000];
    IO("", kiir(m); kiir(m2), str);

    ASSERT_STREQ(str, "cirmi2 - 3.30 eves es eddig 1000 alkalommal nyavogott\ncirmi3 - 6.32 eves es eddig 22 alkalommal nyavogott\n");
}

TEST(Teszt, atlagEletkor) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Macska m = {"cirmi2", 3.3, 1000};
    Macska m2 = {"cirmi3", 6.322, 22};
    Macska m3 = {"cirmi3", 42.11, 22};
    Macska m4 = {"adasda", 22.22, 21};

    Macska macskak[] = {m, m2, m3};
    Macska macskak2[] = {m, m2, m4};

    ASSERT_NEAR(atlagEletkor(macskak, 3), 17.244, 0.0001);
    ASSERT_NEAR(atlagEletkor(macskak2, 3), 10.614, 0.0001);
}

TEST(Teszt, legfiatalabbMacska) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Macska m = {"cirmi2", 3.3, 1000};
    Macska m2 = {"cirmi3", 6.322, 22};
    Macska m3 = {"cirmi3", 42.11, 22};
    Macska m4 = {"adasda", 22.22, 21};

    Macska macskak[] = {m, m2, m3};
    Macska macskak2[] = {m3, m2, m4};

    Macska r1 = legfiatalabbMacska(macskak, 3);
    Macska r2 = legfiatalabbMacska(macskak2, 3);

    Macska rr1 = m;
    Macska rr2 = m2;

    ASSERT_STREQ(r1.nev, rr1.nev);
    ASSERT_STREQ(r2.nev, rr2.nev);
    ASSERT_NEAR(r1.eletkor, rr1.eletkor, 0.0001);
    ASSERT_NEAR(r2.eletkor, rr2.eletkor, 0.0001);
    ASSERT_EQ(r1.nyavogasSzam, rr1.nyavogasSzam);
    ASSERT_EQ(r2.nyavogasSzam, rr2.nyavogasSzam);
}

TEST(Teszt, main) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char* str = (char*) malloc(10000);
    IO("", int res = main_0(), str);

    ASSERT_EQ(res, 0);

    int db = 0;
    while ((str = (strstr(str, "eves es eddig")))) {
        str++;
        db++;
    }

    ASSERT_EQ(db, 11);
}