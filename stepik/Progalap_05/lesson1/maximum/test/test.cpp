#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "error: expected ';'", "error: 'macska' undeclared (first use in this function)"
    };
    CHECK_COMPILER_ERROR("maximum", "maximum.c", errors, 1)
}