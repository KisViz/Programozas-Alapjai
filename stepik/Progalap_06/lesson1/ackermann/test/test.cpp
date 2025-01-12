#include <gtest/gtest.h>
#include <string>
#include <cmath>

using namespace std;

#define main main_0
#include "../src/ackermann.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(0, 0), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(1, 0), 2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(2, 0), 3);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(3, 0), 5);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(4, 0), 13);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    //ASSERT_EQ(ackermann(5, 0), 65533);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(1, 1), 3);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(1, 2), 4);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(1, 4), 6);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(2, 0), 3);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(3, 2), 29);
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(3, 3), 61);
}

TEST(Teszt, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(1, 3), 5);
}

TEST(Teszt, 14) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(2, 4), 11);
}

TEST(Teszt, 15) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(3, 6), 509);
}

TEST(Teszt, 16) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(2, 4040), 8083);
}

TEST(Teszt, 17) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(1, 10000), 10002);
}

TEST(Teszt, 18) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ackermann(0, 100000), 100001);
}

TEST(Teszt, 19) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    printf("HAHA LOL\n");
    // ASSERT_EQ(ackermann(2, 513512), 1027027);
}

TEST(Teszt, 20) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    printf("JAJA, NYILVAN\n");
    // ASSERT_EQ(ackermann(4, 2),  pow(2, 65536)-3 /* xd */);
}