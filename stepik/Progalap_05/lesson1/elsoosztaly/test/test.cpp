#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "warning: extra tokens at end of #include directive",
        "warning: return type of 'main' is not 'int'",
        "warning: format '%d' expects argument of type 'int *', but argument 2 has type 'int'",
        "warning: too many arguments for format",
        "warning: control reaches end of non-void function",
        "error: 'Meddig' undeclared",
        "error: expected ')'",
        "error: stray '\\' in program",
        "error: 'i' undeclared",
        "error: incompatible types when returning type 'char *' but 'double' was expected",
        "error: expected expression before '%' token",
        "error: expected declaration or statement at end of input"
    };

    CHECK_COMPILER_ERROR_LIMIT("elsoosztaly", "elsoosztaly.c", errors, 11, 1)
}