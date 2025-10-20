#include <stdio.h>
int main() {
    int choice;
    float temp, result;
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = (temp * 9/5) + 32;
            printf("Fahrenheit: %.2f", result);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = (temp - 32) * 5/9;
            printf("Celsius: %.2f", result);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
