#include <gtest/gtest.h>

#define main main_0
#include "../src/ora.c"
#undef main

#include "../../tools.cpp"

TEST(ido, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 4;
    int perc = 6;

    Ido a = ido(ora, perc);
    ASSERT_EQ(a.ora, ora);
    ASSERT_EQ(a.perc, perc);
}

TEST(ido, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 23;
    int perc = 2;

    Ido a = ido(ora, perc);
    ASSERT_EQ(a.ora, ora);
    ASSERT_EQ(a.perc, perc);
}

TEST(ido, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 0;
    int perc = 0;

    Ido a = ido(ora, perc);
    ASSERT_EQ(a.ora, ora);
    ASSERT_EQ(a.perc, perc);
}

TEST(ido, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 7;
    int perc = 59;

    Ido a = ido(ora, perc);
    ASSERT_EQ(a.ora, ora);
    ASSERT_EQ(a.perc, perc);
}

TEST(telik, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 4;
    int perc = 6;

    int percek = 10;

    int elvartOra = 4;
    int elvartPerc = 16;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 4;
    int perc = 55;

    int percek = 6;

    int elvartOra = 5;
    int elvartPerc = 1;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 11;
    int perc = 8;

    int percek = 52;

    int elvartOra = 12;
    int elvartPerc = 0;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 23;
    int perc = 56;

    int percek = 5;

    int elvartOra = 0;
    int elvartPerc = 1;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 6;
    int perc = 10;

    int percek = 120;

    int elvartOra = 8;
    int elvartPerc = 10;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 15;
    int perc = 55;

    int percek = 130;

    int elvartOra = 18;
    int elvartPerc = 5;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 23;
    int perc = 50;

    int percek = 130;

    int elvartOra = 2;
    int elvartPerc = 0;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 11;
    int perc = 11;

    int percek = 1440;

    int elvartOra = 11;
    int elvartPerc = 11;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 23;
    int perc = 30;

    int percek = 972599100;

    int elvartOra = 0;
    int elvartPerc = 30;

    Ido start = {ora, perc};
    Ido end = telik(start, percek);

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(telik, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 23;
    int perc = 31;

    int percek = 2124599101;

    int elvartOra = 0;
    int elvartPerc = 32;

    Ido start = {ora, perc};

    Ido end;
    CHECK_RUNNING_TIME(
        for (int i = 0; i < 1000; i++) {
            end = telik(start, percek);
        },
    0.5)

    ASSERT_EQ(end.ora, elvartOra);
    ASSERT_EQ(end.perc, elvartPerc);
}

TEST(megjelenit, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 11;
    int perc = 40;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "11:40");
}

TEST(megjelenit, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 23;
    int perc = 55;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "23:55");
}

TEST(megjelenit, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 10;
    int perc = 0;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "10:00");
}

TEST(megjelenit, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 7;
    int perc = 55;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "07:55");
}

TEST(megjelenit, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 11;
    int perc = 1;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "11:01");
}

TEST(megjelenit, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 4;
    int perc = 5;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "04:05");
}

TEST(megjelenit, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 0;
    int perc = 0;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "00:00");
}

TEST(megjelenit, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 1;
    int perc = 1;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "01:01");
}

TEST(megjelenit, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int ora = 23;
    int perc = 59;

    Ido ido = {ora, perc};

    char str[100];
    IO("", megjelenit(ido), str)
    ASSERT_STREQ(str, "23:59");
}
