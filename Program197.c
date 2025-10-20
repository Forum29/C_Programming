#include <stdio.h>
int main() {
    int choice, n;
    printf("1. Sum of first n natural numbers\n");
    printf("2. Sum of squares\n");
    printf("3. Sum of cubes\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter n: ");
    scanf("%d", &n);

    switch(choice) {
        case 1: printf("Sum = %d", n * (n + 1) / 2); break;
        case 2: printf("Sum = %d", n * (n + 1) * (2 * n + 1) / 6); break;
        case 3: printf("Sum = %d", (n * n) * (n + 1) * (n + 1) / 4); break;
        default: printf("Invalid choice");
    }
    return 0;
}
