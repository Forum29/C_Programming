#include<stdio.h>
int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    if(c >= -273.15) {
        f = (c * 9/5) + 32;
        printf("%.2f C = %.2f F\n", c, f);
    } else {
        printf("Error: Temperature below absolute zero!\n");
    }
    return 0;
}
