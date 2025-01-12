#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "warning: return type defaults to 'int'", "error: called object 'jegyek' is not a function or function pointer"
    };

    CHECK_COMPILER_ERROR("jegyek", "jegyek.c", errors, 1);
}