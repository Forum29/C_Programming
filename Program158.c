#include<stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight (kg) and height (m): ");
    scanf("%f %f", &weight, &height);
    if(height != 0) {
        bmi = weight / (height * height);
        printf("BMI = %.2f\n", bmi);
    } else {
        printf("Error: Height cannot be zero!\n");
    }
    return 0;
}
