#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "warning: return type defaults to 'int'",
        "error: subscripted value is neither array nor pointer nor vector",
        "warning: control reaches end of non-void function"
    };

    CHECK_COMPILER_ERROR_LIMIT("tuzijatek", "tuzijatek.c", errors, 2, 1)
}