#include<stdio.h>
int main() {
    float m, cm;
    printf("Enter length in meters: ");
    scanf("%f", &m);
    cm = m * 100;
    printf("%.2f meters = %.2f centimeters\n", m, cm);
    return 0;
}
