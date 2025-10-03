#include<stdio.h>
int main() {
    float m, ft;
    printf("Enter length in meters: ");
    scanf("%f", &m);
    ft = m * 3.28084;
    printf("Length in feet = %.2f\n", ft);
    return 0;
}
