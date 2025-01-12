#include <gtest/gtest.h>

#define main main_0
#include "../src/szamjegy.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "cicaaa.txt";
    writeContentToFile(filename, "medvehagyma");
    int res = szamjegyek(filename);
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "cic.txt";
    writeContentToFile(filename, "vsdjklvnuiondafbbd...bdbdji");
    int res = szamjegyek(filename);
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "asd.txt";
    writeContentToFile(filename, "6346434634673731230995695754");
    int res = szamjegyek(filename);
    ASSERT_EQ(res, 28);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "cicaaa.txt";
    writeContentToFile(filename, "avabvuaszvgas6v7a8svasba8b5asb0adbnsdf ndf9nfd8vasdvsdv8s5vsd5brs78db5sd578bsd5");
    int res = szamjegyek(filename);
    ASSERT_EQ(res, 18);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "program.c";
    writeContentToFile(filename, "cica lo kutya\n\reger");
    int res = szamjegyek(filename);
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "cicaaa.txt";
    writeContentToFile(filename, "5 kecske\n3 lovacska\n7 mehecske es 11 zsirafocska");
    int res = szamjegyek(filename);
    ASSERT_EQ(res, 5);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char filename[] = "cicaaa.txt";
    writeContentToFile(filename, "uzsdv sd8v\nd sdbs68db sdbsd86b sd b8\nb sd??? sd.-.*gsd *** gsdg 8s6dg sdg6868 6868 sdg6 asd aaaa\n 90");
    int res = szamjegyek(filename);
    ASSERT_EQ(res, 19);
}