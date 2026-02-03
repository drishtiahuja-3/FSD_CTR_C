//eligible 
#include <stdio.h>

int main() {
    int marks, attendance;

    printf("Enter marks and attendance: ");
    scanf("%d %d", &marks, &attendance);

    if (marks >= 40 && attendance >= 75)
        printf("Student is eligible for exam");
    else
        printf("Student is not eligible for exam");

    return 0;
}
