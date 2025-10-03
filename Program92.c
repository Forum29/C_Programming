#include<stdio.h>
#define PI 3.1416
int main() {
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 4 * PI * r * r;
    printf("Surface Area of Sphere = %.2f\n", area);
    return 0;
}
