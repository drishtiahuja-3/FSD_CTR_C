//sum of array using pointer
#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    int *ptr;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // pointer stores base address of array
    ptr = arr;

    for(i = 0; i < 5; i++) {
        sum = sum + *(ptr + i);
    }

    printf("Sum = %d", sum);

    return 0;
}