#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/nagy.c"
#undef main

#include "../../tools.cpp"

Tort t1 = {1, 5}; // 0.2
Tort t2 = {5, 5}; // 1
Tort t3 = {3, 5}; // 0.6
Tort t4 = {4, 5}; // 0.8
Tort t5 = {42, 55}; // 0.76
Tort t6 = {57, 71}; // 0.802
Tort t7 = {1241, 6343}; // 0.195
Tort t8 = {412421, 3637444}; // 0.113
Tort t9 = {1, 3}; // 0.33
Tort t10 = {523235235, 2100000001u}; // 0.000481
Tort t11 = {523235235, 2100000000u}; // 0.0004810001
Tort t12 = {64625, 421151};
Tort t13 = {81225, 557316};
Tort t14 = {2000000000, 2};
Tort t15 = {2, 3};
Tort t16 = {2100000000000000000ll, 2100000000000000000ll};
Tort t17 = {2100000000000000001ll, 2100000000000000000ll};
Tort t18 = {521578125621ll, 12515782224ll};
Tort t19 = {278362783578ll, 5287128000ll};
Tort t20 = {12512521521521ll, 116526972870ll};
Tort t21 = {78125699425782ll, 673915365552ll};
Tort t22 = {2251515161ll, 116526972870ll};
Tort t23 = {8781313464ll, 673915365552ll};

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t1, t2);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t3, t2);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t4, t5);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t6, t5);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t7, t8);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t1, t6);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t2, t8);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t9, t1);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t10, t11);
    ASSERT_EQ(eredmeny, elvart);
}


TEST(Eredmeny, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t11, t10);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t12, t13);
    ASSERT_EQ(eredmeny, elvart);
}


TEST(Eredmeny, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t14, t15);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t16, t17);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 14) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t17, t16);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 15) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t18, t19);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 16) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t19, t18);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 17) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t21, t20);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 18) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t20, t21);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 19) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 1;
    int eredmeny = nagyobb(t22, t23);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Eredmeny, 20) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int elvart = 2;
    int eredmeny = nagyobb(t23, t22);
    ASSERT_EQ(eredmeny, elvart);
}

TEST(Fajlmeret, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    checkFileSize("kicsitnagy", "nagy.c", 169);
}

TEST(Struktura_meret, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    if (sizeof(Tort) > 16) {
        fprintf(stdout, "A Tort struktura legfeljebb 16 bajt lehet (jelenleg: %d bajt)!\n", sizeof(Tort));
        FAIL();
    }
}

TEST(Futasido, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    CHECK_RUNNING_TIME(
            int elvart = 2;
            int eredmeny = nagyobb(t10, t11);
            ASSERT_EQ(eredmeny, elvart);

            elvart = 1;
            eredmeny = nagyobb(t11, t10);
            ASSERT_EQ(eredmeny, elvart),
    0.2);

}