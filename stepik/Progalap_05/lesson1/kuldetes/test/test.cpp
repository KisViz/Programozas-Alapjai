#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "warning: return type defaults to 'int'",
        "warning: control reaches end of non-void function",
        "error: assignment to expression with array type",
        "error: incompatible types when returning type 'Kuldetes'"
    };

    CHECK_COMPILER_ERROR("kuldetes", "kuldetes.c", errors, 1);
}