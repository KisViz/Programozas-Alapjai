#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "error: array size missing in 'szoveg'",
        "error: lvalue required as left operand of assignment",
        "warning: suggest parentheses around assignment used as truth value",
        "warning: multi-character character constant",
        "warning: passing argument 1 of 'printf' makes pointer from integer without a cast",
        "error: expected 'while' before 'whale'",
        "warning: 'return' with a value, in function returning void",
        "error: too few arguments to function"
    };

    CHECK_COMPILER_ERROR_LIMIT("owo", "owo.c", errors, 7, 1);
}