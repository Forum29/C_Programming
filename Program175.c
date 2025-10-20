#include <stdio.h>
int main() {
    int choice;
    printf("1. Pizza\n2. Burger\n3. Sandwich\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("You ordered Pizza"); break;
        case 2: printf("You ordered Burger"); break;
        case 3: printf("You ordered Sandwich"); break;
        case 4: printf("Exiting..."); break;
        default: printf("Invalid choice");
    }
    return 0;
}
