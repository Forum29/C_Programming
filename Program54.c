#include<stdio.h>
int main() {
    float k, c;
    printf("Enter temperature in Kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf("Temperature in Celsius = %.2f\n", c);
    return 0;
}
