#include<stdio.h>
int main() {
    float lb, kg;
    printf("Enter weight in pounds: ");
    scanf("%f", &lb);
    kg = lb / 2.20462;
    printf("Weight in kilograms = %.2f\n", kg);
    return 0;
}
