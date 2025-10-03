#include<stdio.h>
int main() {
    float kg, lb;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    lb = kg * 2.20462;
    printf("Weight in pounds = %.2f\n", lb);
    return 0;
}
