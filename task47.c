//swap 
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d", a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    swap(x,y);
    return 0;
}
