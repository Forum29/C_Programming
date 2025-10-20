#include <stdio.h>
int main() {
    int choice;
    float inr, result;
    printf("1. INR to USD\n2. INR to EUR\n3. INR to YEN\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    switch(choice) {
        case 1: result = inr / 83; printf("USD = %.2f", result); break;
        case 2: result = inr / 90; printf("EUR = %.2f", result); break;
        case 3: result = inr / 0.55; printf("YEN = %.2f", result); break;
        default: printf("Invalid choice");
    }
    return 0;
}
