//prime 
#include <stdio.h>

int main() {
    int n, i, prime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }

    if(prime == 1 && n > 1)
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}
