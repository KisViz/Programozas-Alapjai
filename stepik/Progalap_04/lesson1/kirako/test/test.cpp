#include <gtest/gtest.h>

#define main main_0
#include "../src/kirako.c"
#undef main

int e, l;

int ellenorzes_altalanos(Kirako k, int db, Kirako tomb[]) {
    e++;

    for (int i = 0; i < db; i++) {
        if (k.id == tomb[i].id) {
            return tomb[i].szett;
        }
    }

    return -1;
}
int lerakas_altalanos(Kirako k, int poz, int (*ellenorzesFgv)(Kirako), int db, Kirako tomb[]) {
    l++;

    if (k.szett == -1) {
        return -1;
    }

    int ok = ellenorzesFgv(k) == k.szett;
    e--;

    if (!ok) {
        return -1;
    }

    for (int i = 0; i < db; i++) {
        if (k.id == tomb[i].id) {
            return poz == tomb[i].sorszam ? 1 : 0;
        }
    }

    return -1;
}
void masol(Kirako t1[], Kirako t2[], int db) {
    for (int i = 0; i < db; i++) {
        t2[i].id = t1[i].id;
        t2[i].szett = -1;
        t2[i].sorszam = -1;
    }
}
void TESZT(int db, Kirako* kevert_tomb, Kirako* elvart_tomb, int (*ellenorzesFgv)(Kirako), int (*lerakasFgv)(Kirako, int), int maxHivas) {
    e = 0;
    l = 0;

    Kirako kirakok[db];
    masol(kevert_tomb, kirakok, db);
    kirakozas(kirakok, db, ellenorzesFgv, lerakasFgv);

    if (e > db) {
        fprintf(stderr, "Tul sokszor probaltuk megallapitani egyes darabok szettjet!\n");
        FAIL();
    }

    if (l > maxHivas) {
        fprintf(stderr, "Tul sokszor probaltuk lehelyezni a kirakokat!\n");
        FAIL();
    }

    for (int i = 0; i < db; i++) {
        if (kirakok[i].id != elvart_tomb[i].id || kirakok[i].sorszam != elvart_tomb[i].sorszam || kirakok[i].szett != elvart_tomb[i].szett) {
            fprintf(stderr, "Hibas eredmeny!\n");
            FAIL();
        }
    }
}

// TESZT 1
Kirako k1_1 = {1, 1, 1};
Kirako k1_2 = {2, 1, 2};
Kirako k1_3 = {3, 1, 3};
Kirako k1_4 = {4, 2, 1};
Kirako k1_5 = {5, 2, 2};
Kirako k1_6 = {6, 2, 3};
Kirako k1_7 = {7, 2, 4};
Kirako k1_8 = {8, 2, 5};
Kirako k1_9 = {9, 3, 1};
Kirako kirakok_1[] = {k1_1, k1_2, k1_3, k1_4, k1_5, k1_6, k1_7, k1_8, k1_9};
Kirako kirakok_1_kevert[] = {k1_2, k1_4, k1_8, k1_1, k1_3, k1_9, k1_7, k1_5, k1_6};
int kirakok_1_db = 9;
int ellenorzes1(Kirako k) { return ellenorzes_altalanos(k, kirakok_1_db, kirakok_1); }
int lerakas1(Kirako k, int poz) { return lerakas_altalanos(k, poz, ellenorzes1, kirakok_1_db, kirakok_1); }

TEST(Konnyitett, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_1_db, kirakok_1_kevert, kirakok_1, ellenorzes1, lerakas1, 10000);
}

TEST(Normal, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_1_db, kirakok_1_kevert, kirakok_1, ellenorzes1, lerakas1, 22);
}

TEST(Nehezitett, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_1_db, kirakok_1_kevert, kirakok_1, ellenorzes1, lerakas1, 15);
}




// TESZT 2
Kirako k2_1 = {7, 1, 1};
Kirako k2_2 = {4, 1, 2};
Kirako k2_3 = {6, 2, 1};
Kirako k2_4 = {8, 2, 2};
Kirako k2_5 = {1, 3, 1};
Kirako k2_6 = {3, 3, 2};
Kirako k2_7 = {11, 3, 3};
Kirako k2_8 = {178, 4, 1};
Kirako k2_9 = {2, 4, 2};
Kirako kirakok_2[] = {k2_1, k2_2, k2_3, k2_4, k2_5, k2_6, k2_7, k2_8, k2_9};
Kirako kirakok_2_kevert[] = {k2_4, k2_7, k2_1, k2_5, k2_8, k2_9, k2_2, k2_6, k2_3};
int kirakok_2_db = 9;
int ellenorzes2(Kirako k) { return ellenorzes_altalanos(k, kirakok_2_db, kirakok_2); }
int lerakas2(Kirako k, int poz) { return lerakas_altalanos(k, poz, ellenorzes2, kirakok_2_db, kirakok_2); }

TEST(Konnyitett, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_2_db, kirakok_2_kevert, kirakok_2, ellenorzes2, lerakas2, 10000);
}

TEST(Normal, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_2_db, kirakok_2_kevert, kirakok_2, ellenorzes2, lerakas2, 15);
}

TEST(Nehezitett, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_2_db, kirakok_2_kevert, kirakok_2, ellenorzes2, lerakas2, 12);
}




// TESZT 3
Kirako k3_1 = {1412, 1, 1};
Kirako k3_2 = {4221, 1, 2};
Kirako k3_3 = {101, 1, 3};
Kirako k3_4 = {4, 1, 4};
Kirako k3_5 = {6343, 2, 1};
Kirako k3_6 = {6232, 2, 2};
Kirako k3_7 = {5121, 3, 1};
Kirako k3_8 = {62322, 4, 1};
Kirako k3_9 = {2, 4, 2};
Kirako k3_10 = {32, 4, 3};
Kirako k3_11 = {52511, 5, 1};
Kirako k3_12 = {63463, 5, 2};
Kirako k3_13 = {11111, 5, 3};
Kirako k3_14 = {22222, 5, 4};
Kirako k3_15 = {11, 6, 1};
Kirako k3_16 = {13, 7, 1};
Kirako kirakok_3[] = {k3_1, k3_2, k3_3, k3_4, k3_5, k3_6, k3_7, k3_8, k3_9, k3_10, k3_11, k3_12, k3_13, k3_14, k3_15, k3_16};
Kirako kirakok_3_kevert[] = {k3_1, k3_2, k3_16, k3_10, k3_8, k3_7, k3_15, k3_5, k3_4, k3_13, k3_14, k3_9, k3_6, k3_11, k3_12, k3_3};
int kirakok_3_db = 16;
int ellenorzes3(Kirako k) { return ellenorzes_altalanos(k, kirakok_3_db, kirakok_3); }
int lerakas3(Kirako k, int poz) { return lerakas_altalanos(k, poz, ellenorzes3, kirakok_3_db, kirakok_3); }

TEST(Konnyitett, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_3_db, kirakok_3_kevert, kirakok_3, ellenorzes3, lerakas3, 10000);
}

TEST(Normal, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_3_db, kirakok_3_kevert, kirakok_3, ellenorzes3, lerakas3, 32);
}

TEST(Nehezitett, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_3_db, kirakok_3_kevert, kirakok_3, ellenorzes3, lerakas3, 23);
}



// TESZT 4
Kirako k4_1 = {5, 1, 1};
Kirako k4_2 = {8, 1, 2};
Kirako k4_3 = {444, 1, 3};
Kirako k4_4 = {41, 1, 4};
Kirako k4_5 = {5221515, 1, 5};
Kirako k4_6 = {1, 1, 6};
Kirako kirakok_4[] = {k4_1, k4_2, k4_3, k4_4, k4_5, k4_6};
Kirako kirakok_4_kevert[] = {k4_4, k4_5, k4_2, k4_1, k4_3, k4_6};
int kirakok_4_db = 6;
int ellenorzes4(Kirako k) { return ellenorzes_altalanos(k, kirakok_4_db, kirakok_4); }
int lerakas4(Kirako k, int poz) { return lerakas_altalanos(k, poz, ellenorzes4, kirakok_4_db, kirakok_4); }

TEST(Konnyitett, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_4_db, kirakok_4_kevert, kirakok_4, ellenorzes4, lerakas4, 10000);
}

TEST(Normal, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_4_db, kirakok_4_kevert, kirakok_4, ellenorzes4, lerakas4, 21);
}

TEST(Nehezitett, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    TESZT(kirakok_4_db, kirakok_4_kevert, kirakok_4, ellenorzes4, lerakas4, 13);
}