//string
#include <stdio.h>
#include <string.h>

int main() {
    
    // declaring and initializing a string
    char str[] = "HAT";

    // printing the string
    printf("The string is: %s\n", str);
    printf("%c\n", str[0]);
    str[0] = 'R';
    printf("%c\n", str[0]);
    printf("%d", strlen(str));
    return 0;
}