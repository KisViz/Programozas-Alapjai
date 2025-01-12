#include <gtest/gtest.h>

#define main main_0
#include "../src/nyulak.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    Nyul ny1;
    ny1.eletkor = 6;
    ny1.anyaNyul = NULL;
    ny1.apaNyul = NULL;

    Nyul ny2;
    ny2.eletkor = 7;
    ny2.apaNyul = NULL;
    ny2.anyaNyul = NULL;

    Nyul ny3;
    ny3.eletkor = 5;
    ny3.apaNyul = &ny1;
    ny3.anyaNyul = &ny2;

    Nyul ny4;
    ny4.eletkor = 4;
    ny4.apaNyul = &ny1;
    ny4.anyaNyul = &ny2;

    Nyul ny5;
    ny5.eletkor = 2;
    ny5.apaNyul = &ny3;
    ny5.anyaNyul = &ny4;

    ASSERT_EQ(ny1.eletkor, 6);
    ASSERT_EQ(ny2.eletkor, 7);
    ASSERT_EQ(ny3.eletkor, 5);
    ASSERT_EQ(ny4.eletkor, 4);
    ASSERT_EQ(ny5.eletkor, 2);

    ASSERT_EQ(ny1.apaNyul, nullptr);
    ASSERT_EQ(ny2.apaNyul, nullptr);
    ASSERT_EQ(ny3.apaNyul, &ny1);
    ASSERT_EQ(ny4.apaNyul, &ny1);
    ASSERT_EQ(ny5.apaNyul, &ny3);

    ASSERT_EQ(ny1.anyaNyul, nullptr);
    ASSERT_EQ(ny2.anyaNyul, nullptr);
    ASSERT_EQ(ny3.anyaNyul, &ny2);
    ASSERT_EQ(ny4.anyaNyul, &ny2);
    ASSERT_EQ(ny5.anyaNyul, &ny4);

    ASSERT_EQ(ny5.apaNyul->anyaNyul->eletkor, 7);
    ASSERT_EQ(ny5.anyaNyul->anyaNyul->eletkor, 7);
    ASSERT_EQ(ny5.anyaNyul->apaNyul->eletkor, 6);
}