//no arguments return value 
#include <stdio.h>

int getNumber() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    return x;
}

int main() {
    int num = getNumber();
    printf("Number = %d", num);
    return 0;
}
