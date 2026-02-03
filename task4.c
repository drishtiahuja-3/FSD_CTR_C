//sum and average
#include <stdio.h>

int main() {
    int a, b, sum;
    float avg;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    avg = sum / 2.0;

    printf("Sum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}
