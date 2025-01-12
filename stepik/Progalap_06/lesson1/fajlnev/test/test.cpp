#include <gtest/gtest.h>

#define main main_0
#include "../src/fajlnev.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "kincs";
    writeContentToFile("kincs_1.txt", "2");
    int res = titok(fajlnev);
    ASSERT_EQ(res, 2);

    remove("kincs_1.txt");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "cica";
    writeContentToFile("cica_50.txt", "52");
    int res = titok(fajlnev);
    ASSERT_EQ(res, 52);

    remove("cica_50.txt");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "macska";
    writeContentToFile("macska_82126.txt", "-742");
    int res = titok(fajlnev);
    ASSERT_EQ(res, -742);

    remove("macska_82126.txt");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "../valami";
    writeContentToFile("../valami_7.txt", "642");
    int res = titok(fajlnev);
    ASSERT_EQ(res, 642);

    remove("../valami_7.txt");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "../kiskacsa";
    writeContentToFile("../kiskacsa_1.txt", "0");
    int res = titok(fajlnev);
    ASSERT_EQ(res, 0);

    remove("../kiskacsa_1.txt");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "asd";
    writeContentToFile("asd_5.txt", "24");
    writeContentToFile("asd_142.txt", "macska");
    int res = titok(fajlnev);
    ASSERT_EQ(res, 24);

    remove("asd_5.txt");
    remove("asd_142.txt");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "nemmondommeg";
    writeContentToFile("nemmondommeg_2.txt", "macska");
    writeContentToFile("nemmondommeg_3.txt", "220");
    writeContentToFile("nemmondommeg_4.txt", "macska");
    int res = titok(fajlnev);
    ASSERT_EQ(res, 220);

    remove("nemmondommeg_2.txt");
    remove("nemmondommeg_3.txt");
    remove("nemmondommeg_4.txt");
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char fajlnev[] = "bagoly";
    writeContentToFile("bagoly_24.txt", "macska");
    writeContentToFile("bagoly_27.txt", "cica");
    writeContentToFile("bagoly_94.txt", "hetven");
    writeContentToFile("bagoly_124.txt", "532");
    writeContentToFile("bagoly_523.txt", "macska");
    int res = titok(fajlnev);
    ASSERT_EQ(res, 532);

    remove("bagoly_24.txt");
    remove("bagoly_27.txt");
    remove("bagoly_94.txt");
    remove("bagoly_124.txt");
    remove("bagoly_523.txt");
}
