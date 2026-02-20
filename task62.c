#include <stdio.h>

int main()
{

    // Normal Variable
    int var = 10;

    // Pointer Variable ptr that stores address of var
    int *ptr = &var;

    // Directly accessing ptr will give us an address
    printf("%d\n", ptr);
    printf("%d\n", *ptr);

     int *ptr2 = NULL;   // Null pointer
    int x = 10;
    void *p = &x;   //Void pointer
    printf("%d\n", *(int*)p);   

    *ptr = 20;   // Modifying value of x using void pointer
    printf("%d\n", var);   // Output: 20


    return 0;
}