//pass an array to a function and find the sum of its elements
#include <stdio.h>

int sum(int a[], int n)
{
    int i, s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    return s;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    printf("Sum=%d",sum(arr,5));
    return 0;
}