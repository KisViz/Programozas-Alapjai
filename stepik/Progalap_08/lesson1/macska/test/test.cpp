#include <gtest/gtest.h>
#include <string>

using namespace std;

#define main main_0
#include "../src/macska.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char* tomb = macska();
    ASSERT_STREQ(tomb, "macska");
    tomb[0] = 'a';
    ASSERT_STREQ(tomb, "aacska");
    free(tomb);
}
