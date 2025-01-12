#include <gtest/gtest.h>
#include <cstdio>

#define main main_0
#include "../src/polo.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char meret[] = "XXL";
    char szin[] = "fekete";
    int csikok = 5;

    char input[100];
    char str[100];
    sprintf(input, "%d %s %s", csikok, meret, szin);

    IO(input, Polo res = vasarlas(), str)
    ASSERT_STREQ(meret, res.meret);
    ASSERT_STREQ(szin, res.szin);
    ASSERT_EQ(csikok, res.csikokSzama);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char meret[] = "XXXXXS";
    char szin[] = "sarga";
    int csikok = 5532;

    char input[100];
    char str[100];
    sprintf(input, "%d %s %s", csikok, meret, szin);

    IO(input, Polo res = vasarlas(), str)
    ASSERT_STREQ(meret, res.meret);
    ASSERT_STREQ(szin, res.szin);
    ASSERT_EQ(csikok, res.csikokSzama);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char meret[] = "S";
    char szin[] = "zold";
    int csikok = 0;

    char input[100];
    char str[100];
    sprintf(input, "%d %s %s", csikok, meret, szin);

    IO(input, Polo res = vasarlas(), str)
    ASSERT_STREQ(meret, res.meret);
    ASSERT_STREQ(szin, res.szin);
    ASSERT_EQ(csikok, res.csikokSzama);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char meret[] = "M";
    char szin[] = "margaretasturkizkek";
    int csikok = 5;

    char input[100];
    char str[100];
    sprintf(input, "%d %s %s", csikok, meret, szin);

    IO(input, Polo res = vasarlas(), str)
    ASSERT_STREQ(meret, res.meret);
    ASSERT_STREQ(szin, res.szin);
    ASSERT_EQ(csikok, res.csikokSzama);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char meret[] = "L";
    char szin[] = "halvany sarga";
    int csikok = 5;

    char input[100];
    char str[100];
    sprintf(input, "%d %s %s", csikok, meret, szin);

    IO(input, Polo res = vasarlas(), str)
    ASSERT_STREQ(meret, res.meret);
    ASSERT_STREQ(szin, res.szin);
    ASSERT_EQ(csikok, res.csikokSzama);
}