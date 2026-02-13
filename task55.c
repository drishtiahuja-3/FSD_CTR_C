//sum of array of elements 
#include <stdio.h>

int main()
{
    int a[5], i, sum = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    float avg;
avg = sum / 5.0;
printf("Average = %f", avg);

    return 0;
}