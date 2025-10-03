#include<stdio.h>
#define PI 3.1416
int main() {
    float r, volume;
    printf("Enter radius: ");
    scanf("%f", &r);
    volume = (4.0/3.0) * PI * r * r * r;
    printf("Volume of Sphere = %.2f\n", volume);
    return 0;
}
