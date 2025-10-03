#include<stdio.h>
int main() {
    float l, w, h, volume;
    printf("Enter length, width and height: ");
    scanf("%f %f %f", &l, &w, &h);
    volume = l * w * h;
    printf("Volume of Cuboid = %.2f\n", volume);
    return 0;
}
