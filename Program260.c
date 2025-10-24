#include <stdio.h>

int main() {
    float temp, converted;
    int choice;

    printf("Enter temperature value: ");
    scanf("%f", &temp);

    printf("\nChoose conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            converted = (temp * 9/5) + 32;
            printf("Fahrenheit = %.2f\n", converted);
            break;

        case 2:
            converted = (temp - 32) * 5/9;
            printf("Celsius = %.2f\n", converted);
            break;

        case 3:
            converted = temp + 273.15;
            printf("Kelvin = %.2f\n", converted);
            break;

        case 4:
            converted = temp - 273.15;
            printf("Celsius = %.2f\n", converted);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
