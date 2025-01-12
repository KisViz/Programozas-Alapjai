#include <gtest/gtest.h>

#define main main_0
#include "../src/urlenyek.c"
#undef main

#include "../../tools.cpp"

TEST(qjicqnon, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char res[100];
    char elvart[] = "123456789*123456789*123456789*123456789*\n";

    IO("", qjicqnon(tomb), res)
    ASSERT_STREQ(elvart, res);
}

TEST(qjicqnon, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {1, 1, 1, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 5, 4, 6, 7, 0, 0, 0};
    char res[100];
    char elvart[] = "111456789*12345678***23456789*1235467***\n";

    IO("", qjicqnon(tomb), res)
    ASSERT_STREQ(elvart, res);
}

TEST(ofjiqnion, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[40];

    for (int & i : tomb) {
        i = -1;
    }

    ofjiqnion(tomb);

    int darab[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int elvartDarab[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

    for (int & i : tomb) {
        darab[i]++;
    }

    ASSERT_ARRAY_EQ(darab, elvartDarab, 10);
}

TEST(uifnvvv, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    int elvart[] = {9, 4, 8, 3, 9, 0, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    int elvart2[] = {9, 4, 8, 3, 9, 0, 6, 5, 7, 0, 2, 6, 8, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};

    uifnvvv(tomb, 2, 1, 3);
    ASSERT_ARRAY_EQ(elvart, tomb, 40)

    uifnvvv(tomb, 11, 1, 1);
    ASSERT_ARRAY_EQ(elvart2, tomb, 40)
}

TEST(uifnvvv, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    int elvart[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 1, 0};
    int elvart2[] = {8, 9, 4, 0, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 1, 0};

    uifnvvv(tomb, 39, -1, 1);
    ASSERT_ARRAY_EQ(elvart, tomb, 40)

    uifnvvv(tomb, 3, -1, 3);
    ASSERT_ARRAY_EQ(elvart2, tomb, 40)
}

TEST(njnvjknv, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    int elvart[] = {9, 4, 0, 8, 3, 0, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};

    njnvjknv(tomb, 2);
    njnvjknv(tomb, 5);
    ASSERT_ARRAY_EQ(tomb, elvart, 40)
}

TEST(njnvjknv, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    int elvart[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 0, 0, 0};

    njnvjknv(tomb, 39);
    njnvjknv(tomb, 37);
    ASSERT_ARRAY_EQ(tomb, elvart, 40)
}

TEST(nquinq, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    int elvartDb = 6;

    nquinq(tomb);

    int db = 0;
    for (int i : tomb) {
        if (i == 0) {
            db++;
        }
    }

    ASSERT_EQ(db, elvartDb);
}

TEST(nquinq, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 0, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    int elvartDb = 7;

    nquinq(tomb);

    int db = 0;
    for (int i: tomb) {
        if (i == 0) {
            db++;
        }
    }

    ASSERT_EQ(db, elvartDb);
}

TEST(qwhan, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {9, 4, 0, 8, 3, 9, 6, 5, 7, 0, 2, 8, 6, 4, 5, 5, 8, 2, 0, 9, 7, 1, 7, 6, 2, 3, 2, 6, 7, 4, 3, 5, 3, 1, 8, 1, 4, 9, 0, 1};
    ASSERT_EQ(qwhan(tomb, 30), -1);
}

TEST(qwhan, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 0, 0, 0, 0};
    int tomb2[] = {1, 1, 1, 0, 2, 2, 2, 2, 3, 3, 0, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 0, 0, 0, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 0, 0, 0, 0};
    ASSERT_EQ(qwhan(tomb, 40), -1);
    ASSERT_EQ(qwhan(tomb, 20), 1);
    ASSERT_EQ(qwhan(tomb2, 20), 1);
}

TEST(qwhan, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int tomb[] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 0, 0, 0, 0};
    ASSERT_EQ(qwhan(tomb, 2), 0);
}

TEST(main, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char elvart[] = "53*53618*7945881379474268669925*1212*437\n1. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n153*5368*7945881379474268669925*1212*437\n2. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n1153*5368*794588379474268669925*1212*437\n3. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11153*5368*794588379474268669925*212*437\n4. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n111153*5368*794588379474268669925*22*437\n5. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n1111253*5368*79458837947468669925*22*437\n6. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11112253*5368*7945883794746866995*22*437\n7. lepes: \nVeletlenszeruen szeretnel 2 lapot vagy 1 kivalasztott lapot jokerre alakitani? (1 vagy 2)\n11*12253*5368*79458837947468669*5*22*437\n8. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*122253*5368*79458837947468669*5*2*437\n9. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*1222253*5368*79458837947468669*5**437\n10. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222533*5368*7945887947468669*5**437\n11. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*122225333*5368*7945887947468669*5**47\n12. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*122225333*53468*795887947468669*5**47\n13. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*122225333*534468*79588797468669*5**47\n14. lepes: \nVeletlenszeruen szeretnel 2 lapot vagy 1 kivalasztott lapot jokerre alakitani? (1 vagy 2)\nMelyik lapot?\n11*12222*333*534468*79588797468669*5**47\n15. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*5344468*7958879768669*5**47\n16. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*53444468*7958879768669*5**7\n17. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444568*798879768669*5**7\n18. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*5344445568*798879768669***7\n19. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*53444455668*79887978669***7\n20. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444556668*7988797869***7\n21. lepes: \nVeletlenszeruen szeretnel 2 lapot vagy 1 kivalasztott lapot jokerre alakitani? (1 vagy 2)\nMelyik lapot?\n11*12222*333*534444556668*7988797869***7\n22. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*5344445586668*798879769***7\n23. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444558666*7988879769***7\n24. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444558666*77988879769***\n25. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444558666*77798887969***\n26. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444558666*7778887969*9**\n27. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444558666*7777888969*9**\n28. lepes: \nVeletlenszeruen szeretnel 2 lapot vagy 1 kivalasztott lapot jokerre alakitani? (1 vagy 2)\nMelyik lapot?\n11*12222*333*534444558666*7777888969*9**\n29. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\n11*12222*333*534444558666*7787788969*9**\n30. lepes: \nMelyik lapot szeretned mozgatni?\nMerre?\nHany hellyel?\nSajnos vesztettel!\n";
    char str[1000000];

    IO(""
       "7 b 6 "
       "16 b 15 "
       "33 b 32 "
       "35 b 34 "
       "25 b 20 "
       "32 b 27 "
       "2 "
       "35 b 30 "
       "36 b 31 "
       "23 b 13 "
       "39 b 29 "
       "21 b 5 "
       "27 b 10 "
       "1 9 "
       "29 b 11 "
       "39 b 21 "
       "25 b 5 "
       "37 b 17 "
       "32 b 9 "
       "34 b 11 "
       "1 14 "
       "35 b 12 "
       "26 j 3 "
       "40 b 13 "
       "35 b 7 "
       "30 j 8 "
       "33 b 4 "
       "1 j 1 "
       "1 j 1 "
       "1 j 1 ", int res = main_0(), str)

    if (!strstr(str, "1. lepes") || !strstr(str, "5. lepes") || !strstr(str, "30. lepes") || !strstr(str, "*"), !strstr(str, "Hany hellyel?\n") ||
        !strstr(str, "Merre?\n") || !strstr(str, "Melyik lapot szeretned mozgatni?") || !strstr(str, "Veletlenszeruen szeretnel 2 lapot vagy 1 kivalasztott lapot jokerre alakitani? (1 vagy 2)\n") ||
        !strstr(str, "Sajnos vesztettel!\n") || strstr(str, "Nyertel!\n")) {
        FAIL();
    }

    ASSERT_EQ(res, 0);
}
