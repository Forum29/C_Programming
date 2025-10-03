#include<stdio.h>
int main() {
    float c, k;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("Temperature in Kelvin = %.2f\n", k);
    return 0;
}
