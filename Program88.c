#include<stdio.h>
int main() {
    float g, kg;
    printf("Enter weight in grams: ");
    scanf("%f", &g);
    kg = g / 1000;
    printf("%.2f grams = %.2f kilograms\n", g, kg);
    return 0;
}
