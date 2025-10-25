#include <stdio.h>
float area(float l, float b) { return l * b; }
int main() {
    float l, b;
    printf("Enter length & breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area = %.2f", area(l, b));
    return 0;
}
