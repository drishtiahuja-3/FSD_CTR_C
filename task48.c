//menu driven +-*/
#include <stdio.h>

// Function declarations
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);

int main() {

    int choice, x, y;

    printf("===== MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch(choice) {

        case 1:
            printf("Result = %d", add(x,y));
            break;

        case 2:
            printf("Result = %d", sub(x,y));
            break;

        case 3:
            printf("Result = %d", mul(x,y));
            break;

        case 4:
            printf("Result = %.2f", divi(x,y));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divi(int a, int b) {
    return (float)a / b;
}
