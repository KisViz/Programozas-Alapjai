#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "warning: 'return' with no value, in function returning non-void",
        "warning: too many arguments for format",
        "warning: format '%s' expects argument of type 'char *', but argument 2 has type 'char (*)[1000]'",
        "warning: implicit declaration of function 'strcpi'",
        "error: #include expects \"FILENAME\" or <FILENAME>"
    };

    CHECK_COMPILER_ERROR_LIMIT("leghosszabb", "leghosszabb.c", errors, 4, 1)
}