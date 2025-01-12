#include <gtest/gtest.h>

#define main main_0
#include "../src/var.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Var v = {5, 2};

    lerombol(&v);

    ASSERT_EQ(v.tipus, 5);
    ASSERT_EQ(v.allapot, 0);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Var* v2 = (Var*) malloc(sizeof(Var));
    v2->allapot = 66;
    v2->tipus = 2;

    lerombol(v2);

    ASSERT_EQ(v2->tipus, 2);
    ASSERT_EQ(v2->allapot, 0);

    free(v2);
}