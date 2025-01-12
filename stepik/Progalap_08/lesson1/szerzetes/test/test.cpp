#include <gtest/gtest.h>

#define main main_0
#include "../src/szerzetes.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "Itt a cica";
    const char* lemasolt = masolat(eredeti);
    ASSERT_NE(eredeti, lemasolt);
    ASSERT_STREQ(eredeti, lemasolt);
    free((char*)lemasolt);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "";
    const char* lemasolt = masolat(eredeti);
    ASSERT_NE(eredeti, lemasolt);
    ASSERT_STREQ(eredeti, lemasolt);
    free((char*)lemasolt);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "Az emberke ellatogatott a mezore, ahol egy tehennel talalkozott: muuuu - mondta a tehen. Az ember nem ertette mit akar a tehen, igy tovabb setalt.";
    const char* lemasolt = masolat(eredeti);
    ASSERT_NE(eredeti, lemasolt);
    ASSERT_STREQ(eredeti, lemasolt);
    free((char*)lemasolt);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "5000 macska";
    const char* lemasolt = masolat(eredeti);
    ASSERT_NE(eredeti, lemasolt);
    ASSERT_STREQ(eredeti, lemasolt);
    free((char*)lemasolt);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "@@@!!!!++++00000000000001313131";
    const char* lemasolt = masolat(eredeti);
    ASSERT_NE(eredeti, lemasolt);
    ASSERT_STREQ(eredeti, lemasolt);
    free((char*) lemasolt);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "AAA";
    const char *lemasolt = masolat(eredeti);
    ASSERT_NE(eredeti, lemasolt);
    ASSERT_STREQ(eredeti, lemasolt);
    ASSERT_TRUE(isConst(lemasolt[0]));
    free((char*) lemasolt);
}