#include<stdio.h>
int main() {
    float c, f, k;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    k = c + 273.15;
    printf("%.2f C = %.2f F and %.2f K\n", c, f, k);
    return 0;
}
