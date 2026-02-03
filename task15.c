//eligibility to vote based on age
#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Person is eligible to vote");

    if (age < 18)
        printf("Person is not eligible to vote");

    return 0;
}
