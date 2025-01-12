#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "error: 'osszeg' undeclared (first use in this function)",
        "error: expected ';' before 'szam'",
        "warning: control reaches end of non-void function"
    };

    CHECK_COMPILER_ERROR("szamjegyosszeg", "szamjegyosszeg.c", errors, 1);
}