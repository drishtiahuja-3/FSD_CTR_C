//menu
#include <stdio.h>

// Function declarations
void evenOdd(int n);
int square(int n);
int cube(int n);

int main() {

    int choice, num;

    printf("===== MENU =====\n");
    printf("1. Check Even or Odd\n");
    printf("2. Find Square\n");
    printf("3. Find Cube\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(choice) {

        case 1:
            evenOdd(num);
            break;

        case 2:
            printf("Square = %d", square(num));
            break;

        case 3:
            printf("Cube = %d", cube(num));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}

// Function definitions

void evenOdd(int n) {
    if(n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}
