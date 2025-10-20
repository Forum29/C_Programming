#include <stdio.h>
int main() {
    int choice, a, b;
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1: printf("Sum = %d", a + b); break;
        case 2: printf("Difference = %d", a - b); break;
        case 3: printf("Product = %d", a * b); break;
        case 4:
            if (b != 0)
                printf("Quotient = %.2f", (float)a / b);
            else
                printf("Division by zero not allowed!");
            break;
        default: printf("Invalid choice");
    }
    return 0;
}
