#include <stdio.h>
int main() {
    float bmi;
    printf("Enter BMI value: ");
    scanf("%f", &bmi);

    switch(bmi >= 30 ? 4 : bmi >= 25 ? 3 : bmi >= 18.5 ? 2 : 1) {
        case 1: printf("Underweight"); break;
        case 2: printf("Normal"); break;
        case 3: printf("Overweight"); break;
        case 4: printf("Obese"); break;
    }
    return 0;
}
