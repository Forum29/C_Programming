#include<stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight (kg) and height (m): ");
    scanf("%f %f", &weight, &height);
    bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);
    return 0;
}
