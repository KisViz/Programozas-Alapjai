#include <gtest/gtest.h>

#define main main_0
#include "../src/forma1.c"
#undef main

Pilota p1 = {"Lewis Hamilton", {1990, 10, 7}};
Pilota p2 = {"Max Verstappen", 1992, 11, 4};
Pilota p3 = {"Valtteri Bottas", 1994, 6, 2};
Pilota p4 = {"Charles Leclerc", 1995, 9, 11};
Pilota p5 = {"Lance Stroll", 1996, 2, 15};
Pilota p6 = {"Alexander Albon", 1992, 2, 18};
Pilota p7 = {"Lando Norris", 1993, 11, 22};
Pilota p8 = {"Sergio Pérez", 1981, 12, 25};
Pilota p9 = {"Carlos Sainz Jr.", 1982, 5, 3};
Pilota p10 = {"Daniel Ricciardo", 1984, 4, 5};
Pilota p11 = {"Sebastian Vettel", 1987, 12, 22};
Pilota p12 = {"Esteban Ocon", 1988, 4, 25};
Pilota p13 = {"Pierre Gasly", 1992, 2, 28};
Pilota p14 = {"Romain Grosjean", 1992, 1, 31};
Pilota p15 = {"Antonio Giovinazzi", 1991, 3, 30};
Pilota p16 = {"Danyiil Kvjat", 1994, 11, 30};
Pilota p17 = {"Kevin Magnussen", 1998, 9, 21};
Pilota p18 = {"Kimi Räikkönen", 1997, 5, 1};
Pilota p19 = {"Nicholas Latifi", 1996, 12, 1};
Pilota p20 = {"George Russell", 1999, 10, 3};

Pilota l1 =  p1;Pilota l2 =  p2;Pilota l3 =  p3;Pilota l4 =  p4;Pilota l5 =  p5;Pilota l6 =  p6;Pilota l7 =  p7;Pilota l8 =  p8;Pilota l9 =  p9;Pilota l10 =  p10;
Pilota l11 =  p11;Pilota l12 =  p12;Pilota l13 =  p13;Pilota l14 =  p14;Pilota l15 =  p15;Pilota l16 =  p16;Pilota l17 =  p17;Pilota l18 =  p18;Pilota l19 =  p19;Pilota l20 =  p20;

Versenyeredmeny v1 = {"Ausztralia", 50, {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20}, l1};
Versenyeredmeny v2 = {"Bahrein", 44, {p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1}, l2};
Versenyeredmeny v3 = {"Kina", 75, {p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2}, l3};
Versenyeredmeny v4 = {"Azerbajdzsan", 22, {p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3}, l4};
Versenyeredmeny v5 = {"Spanyolorszag", 52, {p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4}, l5};
Versenyeredmeny v6 = {"Monaco", 64, {p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5}, l6};
Versenyeredmeny v7 = {"Kanada", 61, {p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6}, l7};
Versenyeredmeny v8 = {"Franciaorszag", 77, {p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7}, l8};
Versenyeredmeny v9 = {"Ausztria", 83, {p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8}, l9};
Versenyeredmeny v10 = {"Nagy-Britannia", 45, {p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9}, l10};
Versenyeredmeny v11 = {"Nemetország", 65, {p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10}, l11};
Versenyeredmeny v12 = {"Magyarorszag", 55, {p12, p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11}, l12};
Versenyeredmeny v13 = {"Belgium", 57, {p13, p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12}, l13};
Versenyeredmeny v14 = {"Olaszorszag", 75, {p14, p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13}, l14};
Versenyeredmeny v15 = {"Szingapur", 60, {p15, p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14}, l15};
Versenyeredmeny v16 = {"Oroszorszag", 72, {p16, p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15}, l16};
Versenyeredmeny v17 = {"Japan", 70, {p17, p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16}, l17};
Versenyeredmeny v18 = {"Mexiko", 55, {p18, p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17}, l18};
Versenyeredmeny v19 = {"USA", 51, {p19, p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18}, l19};
Versenyeredmeny v20 = {"Brazilia", 61, {p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19}, l20};
Versenyeredmeny v21 = {"Brazilia", 61, {p20, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19}, l3};


Versenyeredmeny v101 = {"ASD", 22, {p4, p5, p8, p1, p2, p3, p16, p14, p7, p6, p17, p20, p12, p15, p11, p9, p13, p19, p18, p10}, p7};
Versenyeredmeny v102 = {"VASDB", 44, {p16, p17, p10, p18, p3, p1, p15, p4, p9, p2, p5, p8, p7, p6, p19, p11, p13, p12, p20, p14}, p4};
Versenyeredmeny v103 = {"AGASGASGA", 62, {p6, p2, p7, p3, p1, p5, p8, p18, p17, p4, p16, p15, p9, p10, p11, p12, p19, p20, p13, p14}, p4};

Versenyeredmeny v201 = {"asdsada", 512, {p1, p10, p11, p3, p2, p4, p9, p7, p8, p5, p6, p15, p20, p14, p13, p12, p19, p17, p16, p18}, p6};
Versenyeredmeny v202 = {"asdsada", 13, {p13, p14, p16, p15, p9, p10, p8, p12, p11, p7, p6, p17, p5, p18, p4, p19, p3, p20, p2, p1}, p6};
Versenyeredmeny v203 = {"asdsada", 2, {p5, p8, p20, p7, p9, p4, p11, p14, p3, p18, p6, p2, p12, p13, p1, p17, p16, p15, p19, p10}, p6};
Versenyeredmeny v204 = {"asdsada", 33, {p6, p17, p2, p3, p4, p7, p15, p16, p1, p18, p14, p8, p20, p9, p5, p12, p10, p13, p11, p19}, p19};

Versenyeredmeny v301 = {"TIK", 21, {p10, p13, p11, p3, p2, p4, p9, p7, p8, p5, p6, p15, p20, p14, p1, p12, p19, p17, p16, p18}, p11};
Versenyeredmeny v302 = {"Irinyi", 5151, {p1, p14, p16, p15, p9, p8, p13, p12, p11, p7, p6, p17, p5, p18, p4, p19, p3, p20, p2, p10}, p13};
Versenyeredmeny v303 = {"TIK", 21, {p10, p13, p11, p3, p2, p4, p9, p7, p8, p5, p6, p15, p20, p14, p1, p12, p19, p17, p16, p18}, p10};
Versenyeredmeny v304 = {"Irinyi", 5151, {p1, p14, p16, p15, p9, p8, p13, p12, p11, p7, p6, p17, p5, p18, p4, p19, p3, p20, p2, p10}, p10};
Versenyeredmeny v305 = {"ASD", 55, {p9, p11, p12, p19, p20, p1, p10, p13, p14, p15, p16, p2, p3, p4, p5, p6, p7, p8, p17, p18}, p9};

Versenyeredmeny v401 = {"ASD", 44, {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20}, p10};
Versenyeredmeny v402 = {"DDD", 63, {p19, p3, p2, p11, p14, p13, p1, p15, p16, p17, p4, p5, p6, p7, p8, p9, p10, p12, p18, p20}, p20};

Versenyeredmeny versenyek[] = {v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20};
Versenyeredmeny versenyek2[] = {v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v21};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v101};
    int db = 1;
    Pilota elvart = p4;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v101, v102};
    int db = 2;
    Pilota elvart = p16;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v101, v102, v103};
    int db = 3;
    Pilota elvart = p4;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v201, v202, v203, v204};
    int db = 4;
    Pilota elvart = p1;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v301, v302};
    int db = 2;
    Pilota elvart = p10;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v302, v301};
    int db = 2;
    Pilota elvart = p1;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v302, v301, v303, v304, v305};
    int db = 5;
    Pilota elvart = p1;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v302, v301, v305, v304, v303};
    int db = 5;
    Pilota elvart = p1;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Pilota res = gyoztes(versenyek2, 20);
    ASSERT_STREQ(res.nev, p3.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, p3.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, p3.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, p3.szuletesiDatum.nap);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Pilota res = gyoztes(versenyek, 20);
    ASSERT_STREQ(res.nev, p10.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, p10.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, p10.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, p10.szuletesiDatum.nap);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Versenyeredmeny eredmenyek[] = {v401, v402};
    int db = 2;
    Pilota elvart = p2;

    Pilota res = gyoztes(eredmenyek, db);
    ASSERT_STREQ(res.nev, elvart.nev);
    ASSERT_EQ(res.szuletesiDatum.ev, elvart.szuletesiDatum.ev);
    ASSERT_EQ(res.szuletesiDatum.honap, elvart.szuletesiDatum.honap);
    ASSERT_EQ(res.szuletesiDatum.nap, elvart.szuletesiDatum.nap);
}