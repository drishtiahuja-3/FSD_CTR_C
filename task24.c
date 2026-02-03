//restaurant ordering system
#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    printf("\n--- MENU ---\n");
    printf("1. Burger (100)\n2. Pizza (200)\n3. Sandwich (80)\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            total = qty * 100;
            printf("Total Bill = %.2f", total);
            break;

        case 2:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            total = qty * 200;
            printf("Total Bill = %.2f", total);
            break;

        case 3:
            printf("Enter quantity: ");
            scanf("%d", &qty);
            total = qty * 80;
            printf("Total Bill = %.2f", total);
            break;

        case 4:
            printf("Thank you!");
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
