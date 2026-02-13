//palindrome 
#include <stdio.h>

int main() {
    int n, reverse = 0, digit, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;   

    while(n > 0) {
        digit = n % 10;            
        reverse = reverse * 10 + digit;
        n = n / 10;                
    }

    if(original == reverse) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}

