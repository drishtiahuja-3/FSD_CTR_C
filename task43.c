//recursion
#include <stdio.h>

void printNum(int n) {

    if(n > 5)   // Base condition
        return;

    printf("%d ", n);

    printNum(n + 1);   // Recursive call
}

int main() {
    printNum(1);
    return 0;
}
