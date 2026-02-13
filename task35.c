//sum of digits 
#include <stdio.h>
int main() {
    int n, sum = 0, d;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        d = n % 10;      // take last digit
        sum = sum + d;   // add it to sum
        n = n / 10;      // remove last digit
    }

    printf("Sum = %d", sum);

    return 0;
}
