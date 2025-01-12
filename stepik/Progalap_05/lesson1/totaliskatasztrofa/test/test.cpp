#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "warning: overflow in conversion",
        "warning: division by zero",
        "warning: incompatible implicit declaration of built-in function",
        "warning: return type defaults to 'int'",
        "warning: excess elements in struct initializer",
        "warning: array 'globaltomb' assumed to have one element",
        "warning: control reaches end of non-void function",
        "warning: \"MAKRO\" redefined",
        "warning: unused variable 'a'",
        "warning: 'return' with a value, in function returning void",
        "warning: return type of 'main' is not 'int'",
        "warning: extra tokens at end of #include directive",
        "warning: character constant too long for its type",
        "warning: passing argument 1 of 'printf' makes pointer from integer without a cast",
        "warning: implicit declaration of function",
        "warning: returning 'void *' from a function with return type 'int' makes integer from pointer without a cast",
        "warning: format '%s' expects argument of type 'char *', but argument 2 has type 'int'",
        "warning: label 'vege' defined but not used",
        "warning: value computed is not used",
        "warning: too many arguments for format",
        "warning: format '%d' expects a matching 'int' argument",
        "error: size of array 't' is negative",
        "error: unknown type name 'Macska'",
        "error: expected identifier or '(' before '[' token",
        "error: return type is an incomplete type",
        "error: expected ';' before '}' token",
        "error: variable 'm' has initializer but incomplete type",
        "error: storage size of 'm' isnot known",
        "error: expected ')' before 'return'",
        "error: unknown type name 'intike'",
        "error: expected ';', ',' or ')' before 'tomb'",
        "error: array type has incomplete element type 'int[]'",
        "error: assignment to expression with array type",
        "error: subscripted value is neither array nor pointer nor vector",
        "error: called object 'a' is not a function or function pointer",
        "error: expected '=', ',', ';', 'asm' or '__attribute__' before ':' token",
        "error: redefinition of 'kkk'",
        "error: invalid suffix \"a\" on integer constant",
        "error: conflicting types for 'dupla'",
        "error: expected expression before 'int'",
        "error: expected identifier or '*' before 'goto'",
        "error: expected identifier or '(' before numeric constant",
        "error: incompatible types when initializing",
        "error: invalid operands to binary * (have 'int' and 'char *')",
        "error: 'i' undeclared",
        "error: two or more data types in declaration specifiers",
        "error: 'q' redeclared as different kind of symbol",
        "error: too many arguments to function",
        "error: macro \"S\" requires 2 arguments, but only 1 given"
    };


    CHECK_COMPILER_ERROR_LIMIT("totaliskatasztrofa", "katasztrofa.c", errors, 47, 1);
}