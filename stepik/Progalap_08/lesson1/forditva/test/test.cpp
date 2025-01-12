#include <gtest/gtest.h>

#define main main_0
#include "../src/forditva.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "macska";
    char elvart[] = "akscam";
    char* eredmeny = megfordit(eredeti);
    ASSERT_STREQ(elvart, eredmeny);
    free(eredmeny);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "a";
    char elvart[] = "a";
    char* eredmeny = megfordit(eredeti);
    ASSERT_STREQ(elvart, eredmeny);
    free(eredmeny);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "";
    char elvart[] = "";
    char* eredmeny = megfordit(eredeti);
    ASSERT_STREQ(elvart, eredmeny);
    free(eredmeny);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    const char eredeti[] = "a lovacska uszkal a 30. patakban";
    char elvart[] = "nabkatap .03 a lakzsu akscavol a";
    char* eredmeny = megfordit(eredeti);
    ASSERT_STREQ(elvart, eredmeny);
    free(eredmeny);
}