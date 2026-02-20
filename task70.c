//pass a string to a function and print it
#include <stdio.h>

void printStr(char str[]) {
    printf("%s", str);
}

int main() {
    char str[] = "Hello, World!";
    char str2[10];
    char str3[] = "Welcome to C programming.";
    // Passing string to a 
    // function
    printStr(str);
    strcpy(str2, str);
    printf("\n%s", str2);
    strcat(str2, str3);
    printf("\n%s", str2);
    return 0;
}