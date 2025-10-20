#include <stdio.h>
int main() {
    int choice;
    float balance = 1000, amount;

    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Current Balance = %f", balance); break;
        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New Balance = %f", balance);
            break;
        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if(amount > balance)
                printf("Insufficient Balance!");
            else {
                balance -= amount;
                printf("New Balance = %f", balance);
            }
            break;
        case 4: printf("Thank you!"); break;
        default: printf("Invalid option");
    }
    return 0;
}
