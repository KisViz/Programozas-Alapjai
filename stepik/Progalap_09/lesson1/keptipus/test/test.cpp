#include <gtest/gtest.h>

#define main main_0
#include "../src/keptipus.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s[] = "P2\n3 3\n255\n0 0 0 0 0 0 0 0 0";
    writeContentToFile("elso.pgm", s);
    int res = pgm("elso.pgm");
    ASSERT_EQ(res, 1);
    remove("elso.pgm");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s[] = "P2\n2 2\n1\n0 1 0 1";
    writeContentToFile("elso.pgm", s);
    int res = pgm("elso.pgm");
    ASSERT_EQ(res, 1);
    remove("elso.pgm");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s[] = "P25\n3 3\n2\n0 1 2 0 1 2 0 2 1";
    writeContentToFile("elso.pgm", s);
    int res = pgm("elso.pgm");
    ASSERT_EQ(res, 0);
    remove("elso.pgm");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s[] = "A B C D E\n3 3\n255\n0 0 0 0 0 0 0 0 0";
    writeContentToFile("asd.pgm", s);
    int res = pgm("asd.pgm");
    ASSERT_EQ(res, 0);
    remove("asd.pgm");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s[] = "P2 P2\n3 3\n255\n0 0 0 0 0 0 0 0 0";
    writeContentToFile("cica.pgm", s);
    int res = pgm("cica.pgm");
    ASSERT_EQ(res, 0);
    remove("cica.pgm");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s[] = "P2       P2      P2\n3 3\n255\n0 0 0 0 0 0 0 0 0";
    writeContentToFile("nemvirus.pgm", s);
    int res = pgm("nemvirus.pgm");
    ASSERT_EQ(res, 0);
    remove("nemvirus.pgm");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s[] = "P2\n1 1\n10000\n10000";
    writeContentToFile("nemvirus.jar", s);
    int res = pgm("nemvirus.jar");
    ASSERT_EQ(res, 1);
    remove("nemvirus.jar");
}
