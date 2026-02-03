#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("Number is divisible by both 3 and 7");
    }
    else if (num % 3 == 0) {
        printf("Number is divisible by 3");
    }
    else if (num % 7 == 0) {
        printf("Number is divisible by 7");
    }
    else {
        printf("Number is not divisible by 3 or 7");
    }

    return 0;
}
