#include <gtest/gtest.h>

#define main main_0
#include "../src/tomorites.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "cica";
    char s2[] = "baba";
    char s3[] = "bean";
    char elvart[] = "emdn";

    char* szovegek[] = {s1, s2, s3, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "belt";
    char s2[] = "me";
    char s3[] = "a";
    char elvart[] = "nilt";

    char* szovegek[] = {s1, s2, s3, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "belt";
    char s2[] = "meag";
    char s3[] = "a";
    char elvart[] = "nilz";

    char* szovegek[] = {s1, s2, s3, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "belt";
    char s2[] = "meah";
    char s3[] = "a";
    char* elvart = NULL;

    char* szovegek[] = {s1, s2, s3, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "bElt";
    char s2[] = "meaa";
    char s3[] = "a";
    char* elvart = NULL;

    char* szovegek[] = {s1, s2, s3, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "belt";
    char s2[] = "meaa";
    char s3[] = "aaa";
    char s4[] = "aaaa";
    char s5[] = "aaaaaaaaaaa a";
    char s6[] = "aa";
    char s7[] = "aaa";
    char s8[] = "aaa";
    char* elvart = NULL;

    char* szovegek[] = {s1, s2, s3, s4, s5, s6, s7, s8, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "abba";
    char s2[] = "meow";
    char s3[] = "bacac";
    char s4[] = "bbbbbbbbbbba";
    char elvart[] = "ogsxdbbbbbba";

    char* szovegek[] = {s1, s2, s3, s4, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "aaaa";
    char s2[] = "aa";
    char s3[] = "aaaaa";
    char s4[] = "a";
    char elvart[] = "aaaaa";

    char* szovegek[] = {s1, s2, s3, s4, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char s1[] = "macska";
    char elvart[] = "macska";

    char* szovegek[] = {s1, NULL};
    char* res = tomorites(szovegek);
    ASSERT_STREQ(res, elvart);
    free(res);
}