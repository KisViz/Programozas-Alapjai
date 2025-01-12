#include <gtest/gtest.h>

#define main main_0
#include "../src/osszead.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    osszeadas(5, 4);
    char res[] = "5+4=9\n";

    char str[100];
    getFileContents("eredmeny.txt", str);
    ASSERT_STREQ(str, res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    osszeadas(15, 22);
    char res[] = "15+22=37\n";

    char str[100];
    getFileContents("eredmeny.txt", str);
    ASSERT_STREQ(str, res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    osszeadas(-5, -4);
    char res[] = "-5+-4=-9\n";

    char str[100];
    getFileContents("eredmeny.txt", str);
    ASSERT_STREQ(str, res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    osszeadas(0, 0);
    char res[] = "0+0=0\n";

    char str[100];
    getFileContents("eredmeny.txt", str);
    ASSERT_STREQ(str, res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    osszeadas(-5, 4);
    char res[] = "-5+4=-1\n";

    char str[100];
    getFileContents("eredmeny.txt", str);
    ASSERT_STREQ(str, res);
}