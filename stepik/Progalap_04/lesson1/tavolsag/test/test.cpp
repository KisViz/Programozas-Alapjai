#include <gtest/gtest.h>

#define main main_0
#include "../src/tavolsag.c"
#undef main

Ember a = {"Margitka", 77, {5, 4}};
Ember b = {"Juditka", 66, {3, 4.5}};
Ember c = {"Irenke", 55, {2, 7.1}};
Ember d = {"Gaborka", 44, {4, 2.2}};
Ember e = {"Jocoka", 33, {1, 1.8}};
Ember f = {"Otto", 22, {3, 3.3}};
Ember g = {"Kinga", 19, {4.4, 2.7}};
Ember h = {"Eszter", 24, {2.1, 8.2}};
Ember i = {"Peter", 22, {2, 8.2}};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {a, b, c};
    int db = 3;
    int res = 1;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {d, h};
    int db = 2;
    int res = 1;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {h, d};
    int db = 2;
    int res = 1;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {i, h};
    int db = 2;
    int res = 0;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {h, i};
    int db = 2;
    int res = 0;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {i, g, f, e};
    int db = 4;
    int res = 1;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {i, g, f, e, b};
    int db = 5;
    int res = 0;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {i, g, f, e, b, a};
    int db = 6;
    int res = 0;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {i, e, b, a, d};
    int db = 5;
    int res = 1;
    ASSERT_EQ(szabalyos(emberek, db), res);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Ember emberek[] = {i};
    int db = 1;
    int res = 1;
    ASSERT_EQ(szabalyos(emberek, db), res);
}