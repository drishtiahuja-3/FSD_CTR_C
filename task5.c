//multiply and divide 
#include <stdio.h>

int main() {
    int a, b;
    float mul, div;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    mul = a * b;
    div = (float)a / b;

    printf("Multiplication = %.2f", mul);
    printf("\nDivision = %.2f", div);

    return 0;
}
