#include <gtest/gtest.h>

#define main main_0
#include "../src/profizmus.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {1, 1},
            {0, 0}
    };

    int n = 2;
    int h = 3;

    int res = 0;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {1, 1},
            {0, 0}
    };

    int n = 2;
    int h = 1;

    int res = 0;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {1, 1},
            {2, 3},
            {5, 5},
            {5, 4},
            {4, 5},
            {-3, 3},
            {-5, 3.5},
            {2, 2},
            {0, 1},
            {0.1, 1},
            {0.1, 0.1},
            {0.01, 0.01},
            {0, 0}
    };

    int n = 14;
    int h = 500;

    int res = 5;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {1, 1},
            {2, 3},
            {5, 5},
            {5, 4},
            {4, 5},
            {-3, 3},
            {-5, 3.5},
            {2, 2},
            {0, 1},
            {0.1, 1},
            {0.1, 0.1},
            {0.01, 0.01},
            {0, 0}
    };

    int n = 31;
    int h = 6217115;

    int res = 2;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {1, 1},
            {2, 3},
            {5, 5},
            {5, 4},
            {4, 5},
            {-3, 3},
            {-5, 3.5},
            {2, 2},
            {0, 1},
            {0.1, 1},
            {0.1, 0.1},
            {0.01, -0.01},
            {0, 0}
    };

    int n = 31;
    int h = -3000;

    int res = 11;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {1, 1},
            {2, 3},
            {5, 5},
            {5, 4},
            {4, 5},
            {-3, 3},
            {-5, 3.5},
            {2, 2},
            {0, 1},
            {0.1, 1},
            {0.1, 0.1},
            {0.01, -0.01},
            {0, 0}
    };

    int n = 31;
    int h = -3200;

    int res = 12;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {0, 0.1},
            {0, -0.1},
            {0.1, 0},
            {-0.1, 0},
            {4.2, 0},
            {0, 4.2},
            {0, 0.01},
            {0, 0}
    };

    int n = 1;
    int h = 0;

    int res = 2;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {0, 0.1},
            {0, -0.1},
            {0.1, 0},
            {-0.1, 0},
            {4.2, 0},
            {0, 4.2},
            {0, 0.01},
            {0, 0}
    };

    int n = 2;
    int h = 0;

    int res = 3;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {0, 0.1},
            {0, -0.1},
            {0.1, 0},
            {-0.1, 0},
            {4.2, 0},
            {0, 4.2},
            {0, 0.01},
            {0, 0}
    };

    int n = 8;
    int h = 1;

    int res = 3;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    FibonacciProSorozat p[] {
            {0, 0}
    };

    int n = 2000000000;
    int h = -2100000000;

    int res = 0;

    ASSERT_EQ(hatarAtlepes(p, n, h), res);
}