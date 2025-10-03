#include<stdio.h>
int main() {
    float side, area;
    printf("Enter side of cube: ");
    scanf("%f", &side);
    area = 6 * side * side;
    printf("Surface Area of Cube = %.2f\n", area);
    return 0;
}
