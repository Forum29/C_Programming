#include<stdio.h>
#define PI 3.1416
int main() {
    float r, c;
    printf("Enter radius: ");
    scanf("%f", &r);
    c = 2 * PI * r;
    printf("Circumference = %.2f\n", c);
    return 0;
}
