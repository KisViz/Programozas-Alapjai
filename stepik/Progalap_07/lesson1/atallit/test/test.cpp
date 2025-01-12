#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/atallit.c"
#undef main

TEST(atallit, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int a;
    a = 30;
    atallit(&a);
    ASSERT_EQ(a, 30);

    a = 48;
    atallit(&a);
    ASSERT_EQ(a, 48);

    a = 21;
    atallit(&a);
    ASSERT_EQ(a, 42);

    a = 73;
    atallit(&a);
    ASSERT_EQ(a, 146);
}

TEST(oraatallitas, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(oraatallitas(20, 33), 66);
}

TEST(oraatallitas, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(oraatallitas(42, 33), 42);
}

TEST(oraatallitas, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(oraatallitas(120, 33), 120);
}

TEST(oraatallitas, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(oraatallitas(120, 119), 120);
}

TEST(oraatallitas, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(oraatallitas(120, 121), 242);
}

TEST(oraatallitas, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(oraatallitas(13, 13), 26);
}