//scholarship eligibility
#include <stdio.h>

int main() {
    int marks, attendance;

    printf("Enter marks and attendance: ");
    scanf("%d %d", &marks, &attendance);

    if (marks >= 80 && attendance >= 75)
        printf("Student is eligible for scholarship");
    else
        printf("Student is not eligible for scholarship");

    return 0;
}
