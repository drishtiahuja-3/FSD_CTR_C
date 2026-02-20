#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr;

    // Input array elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Point pointer to array
    ptr = arr;

    // Print using pointer
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}