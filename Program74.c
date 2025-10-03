#include<stdio.h>
int main() {
    float l, w, area;
    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);
    area = l * w;
    printf("Area of Rectangle = %.2f\n", area);
    return 0;
}
