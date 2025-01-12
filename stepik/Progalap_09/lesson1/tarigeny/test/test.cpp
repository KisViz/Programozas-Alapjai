#include <gtest/gtest.h>

#define main main_0
#include "../src/tarigeny.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(1), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(0), 1);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(4), 3);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(13), 4);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(7), 3);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(8), 4);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(33), 6);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(71), 7);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(120), 7);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(224), 8);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(5125), 13);
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(11111), 14);
}

TEST(Teszt, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(412414122), 29);
}

TEST(Teszt, 14) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(tarigeny(2412414122), 32);
}
