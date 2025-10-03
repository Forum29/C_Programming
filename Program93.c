#include<stdio.h>
int main() {
    float l, w, perimeter;
    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);
    perimeter = 2 * (l + w);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);
    return 0;
}
