//area menu 
#include <stdio.h>

int main() {
    int choice;
    float r, l, b, h, area;

    printf("\n1. Circle\n2. Rectangle\n3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area of Circle = %.2f", area);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f%f", &l, &b);
            area = l * b;
            printf("Area of Rectangle = %.2f", area);
            break;

        case 3:
            printf("Enter base and height: ");
            scanf("%f%f", &b, &h);
            area = 0.5 * b * h;
            printf("Area of Triangle = %.2f", area);
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
