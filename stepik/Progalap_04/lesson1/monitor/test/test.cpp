#include <gtest/gtest.h>

#define main main_0
#include "../src/monitor.c"
#undef main

Monitor m0 = {0, 0, 0, 0};
Monitor m1 = {1920, 1080, 21, 100000};
Monitor m2 = {1280, 720, 20, 40000};
Monitor m3 = {2560, 1080, 29, 90000};
Monitor m4 = {1024, 768, 18, 5500};
Monitor m5 = {1920, 1080, 23, 40000};
Monitor m6 = {1920, 1080, 23, 45000};
Monitor m7 = {1920, 1079, 40, 10000};
Monitor m8 = {1919, 1080, 40, 10000};

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m1, m2, m3, m4};
    int db = 4;
    Monitor result = m1;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m4, m2, m1, m4};
    int db = 4;
    Monitor result = m1;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m2, m3, m4, m6, m7};
    int db = 5;
    Monitor result = m6;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m1, m7, m5, m4};
    int db = 4;
    Monitor result = m5;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m5, m7, m1, m4};
    int db = 4;
    Monitor result = m5;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m6, m5, m1, m8};
    int db = 4;
    Monitor result = m5;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m5, m1, m6, m8};
    int db = 4;
    Monitor result = m5;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m1};
    int db = 1;
    Monitor result = m1;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m2};
    int db = 1;
    Monitor result = m0;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Monitor monitorok[] = {m2, m3, m4, m7, m8};
    int db = 5;
    Monitor result = m0;

    Monitor res = monitorVasarlas(monitorok, db);

    ASSERT_EQ(result.pixelX, res.pixelX);
    ASSERT_EQ(result.pixelY, res.pixelY);
    ASSERT_EQ(result.kepatlo, res.kepatlo);
    ASSERT_EQ(result.ar, res.ar);
}