#include <stdio.h>

int main() {
    int a = 10;        
    int b;            
    char c;            
    char str[50];      
    const int d = 10;
    
    // Initializing constant variable var after declaration
    //d = 20;
   
    printf("Value of a is: %d\n\n", a);

    printf("Enter an integer number: ");
    scanf(" %d", &b);

    printf("Enter a single character: ");
    scanf(" %c", &c);   

    printf("Enter a word: ");
    scanf(" %s", str);

    printf("\nOutput\n");
    printf("Integer a = %d\n", a);
    printf("Integer b = %d\n", b);
    printf("Character = %c\n", c);
    printf("String = %s\n", str);
    printf("Constant = %d", d);
    return 0;   
}
