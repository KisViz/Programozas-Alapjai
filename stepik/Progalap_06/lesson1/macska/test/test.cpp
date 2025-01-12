#include <gtest/gtest.h>

#define main main_0
#include "../src/macska.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    macskakiir();
    char res[100];
    getFileContents("macska.txt", res);
    ASSERT_STREQ("MACSKA\n", res);
}