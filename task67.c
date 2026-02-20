//maximum element in an array using pointers
#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr, max;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // pointer pointing to first element
    ptr = arr;
    max = *ptr;   // assume first element is largest

    for(i = 1; i < 5; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Largest element = %d", max);

    return 0;
}