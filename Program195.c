#include <stdio.h>
int main() {
    int choice, a, b;
    printf("1. AND\n2. OR\n3. NOT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two values (0 or 1): ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", a && b);
            break;
        case 2:
            printf("Enter two values (0 or 1): ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", a || b);
            break;
        case 3:
            printf("Enter value (0 or 1): ");
            scanf("%d", &a);
            printf("Result = %d", !a);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
