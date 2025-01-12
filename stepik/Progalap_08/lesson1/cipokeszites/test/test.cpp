#include <gtest/gtest.h>

#define main main_0
#include "../src/cipokeszites.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 5;
    const char szin[] = "piros";
    int meret = 37;
    Cipo* cipok = cipokeszites(darab, szin, meret);
    for (int i = 0; i < darab; i++) {
        ASSERT_STREQ(cipok[i].szin, szin);
        ASSERT_EQ(cipok[i].meret, meret);
    }
    free(cipok);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 5;
    const char szin[] = "piros";
    int meret = 33;
    Cipo* cipok = cipokeszites(darab, szin, meret);
    for (int i = 0; i < darab; i++) {
        ASSERT_STREQ(cipok[i].szin, szin);
        ASSERT_EQ(cipok[i].meret, meret);
    }
    free(cipok);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 5;
    const char szin[] = "kek";
    int meret = 37;
    Cipo* cipok = cipokeszites(darab, szin, meret);
    for (int i = 0; i < darab; i++) {
        ASSERT_STREQ(cipok[i].szin, szin);
        ASSERT_EQ(cipok[i].meret, meret);
    }
    free(cipok);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 5000;
    const char szin[] = "sarga";
    int meret = 40;
    Cipo* cipok = cipokeszites(darab, szin, meret);
    for (int i = 0; i < darab; i++) {
        ASSERT_STREQ(cipok[i].szin, szin);
        ASSERT_EQ(cipok[i].meret, meret);
    }
    free(cipok);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int darab = 3000000;
    const char szin[] = "rozsaszin";
    int meret = 44;
    Cipo* cipok = cipokeszites(darab, szin, meret);
    for (int i = 0; i < darab; i++) {
        ASSERT_STREQ(cipok[i].szin, szin);
        ASSERT_EQ(cipok[i].meret, meret);
    }
    free(cipok);
}