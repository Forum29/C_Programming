#include<stdio.h>
int main() {
    float inch, cm;
    printf("Enter length in inches: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("Length in centimeters = %.2f\n", cm);
    return 0;
}
