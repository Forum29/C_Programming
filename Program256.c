#include <stdio.h>
int main() {
    int choice;
    float inr;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    printf("1.USD 2.Euro 3.Yen: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("USD: %.2f\n", inr/83.0); break;
        case 2: printf("Euro: %.2f\n", inr/89.0); break;
        case 3: printf("Yen: %.2f\n", inr*1.80); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
