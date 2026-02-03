//atm
#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    printf("\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter withdraw amount: ");
            scanf("%f", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("Remaining Balance = %.2f", balance);
            } else {
                printf("Insufficient balance");
            }
            break;

        case 4:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
