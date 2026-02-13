//sq of no.s
#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Square = %d", square(num));
    return 0;
}
