#include<stdio.h>
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    if(c >= -273.15)
        printf("%.2f F = %.2f C\n", f, c);
    else
        printf("Error: Temperature below absolute zero!\n");
    return 0;
}
