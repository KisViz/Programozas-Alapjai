#include <gtest/gtest.h>

#define main main_0
#include "../src/ranglista.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[1000];
    writeContentToFile("ranglista.txt", "8 6 5 3 3 1");
    IO("", ranglista(), res)
    ASSERT_STREQ(res, "1. 8\n2. 6\n3. 5\n4. 3\n5. 3\n6. 1\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[1000];
    writeContentToFile("ranglista.txt", "5");
    IO("", ranglista(), res)
    ASSERT_STREQ(res, "1. 5\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[1000];
    writeContentToFile("ranglista.txt", "8 6 5 3 3 1 5");
    IO("", ranglista(), res)
    ASSERT_STREQ(res, "1. 8\n2. 6\n3. 5\n4. 3\n5. 3\n6. 1\n7. 5\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[1000];
    writeContentToFile("ranglista.txt", "122 1 1");
    IO("", ranglista(), res)
    ASSERT_STREQ(res, "1. 122\n2. 1\n3. 1\n");
}