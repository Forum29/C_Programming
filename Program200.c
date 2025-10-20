#include <stdio.h>
int main() {
    int choice, tickets;
    printf("1. Movie\n2. Train\n3. Flight\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    switch(choice) {
        case 1: printf("Total Cost = Rs. %d", tickets * 150); break;
        case 2: printf("Total Cost = Rs. %d", tickets * 500); break;
        case 3: printf("Total Cost = Rs. %d", tickets * 2500); break;
        default: printf("Invalid choice");
    }
    return 0;
}
