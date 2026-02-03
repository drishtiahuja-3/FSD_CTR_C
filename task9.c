#include <stdio.h>

int main() {

    int a = 10, b = 5;
    int x = 1, y = 0;

    printf("===== OPERATORS IN C LANGUAGE =====\n\n");

    /* 1. ARITHMETIC OPERATORS */
    printf("1. Arithmetic Operators\n");
    printf("Addition (a + b) = %d\n", a + b);
    printf("Subtraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division (a / b) = %d\n", a / b);
    printf("Modulus (a %% b) = %d\n\n", a % b);

    /* 2. RELATIONAL OPERATORS */
    printf("2. Relational Operators\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n\n", a == b);

    /* 3. LOGICAL OPERATORS */
    printf("3. Logical Operators\n");
    printf("x && y = %d\n", x && y);
    printf("x || y = %d\n", x || y);
    printf("!x     = %d\n\n", !x);

    /* 4. BITWISE OPERATORS */
    printf("4. Bitwise Operators\n");
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("~a     = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    /* 5. UNARY OPERATORS */
    printf("5. Unary Operators\n");
    printf("++a = %d\n", ++a);
    printf("--b = %d\n\n", --b);

    /* 6. TERNARY OPERATOR */
    printf("6. Ternary Operator\n");
    int max = (a > b) ? a : b;
    printf("Largest number = %d\n", max);

    return 0;
}
