#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/magas.c"
#undef main

Karacsonyfa k1 = {"Luc", 5};
Karacsonyfa k2 = {"Luc", 7};
Karacsonyfa k3 = {"Luc", 7};
Karacsonyfa k4 = {"Luc", 3};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k1, &k2), &k2);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k1, &k3), &k3);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k1, &k4), &k1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k2, &k3), nullptr);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k2, &k4), &k2);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k3, &k4), &k3);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k4, &k4), nullptr);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k3, &k3), nullptr);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k2, &k2), nullptr);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(magasabb(&k1, &k1), nullptr);
}
