#include<stdio.h>
int main() {
    float l, w, peri;
    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);
    peri = 2 * (l + w);
    printf("Perimeter = %.2f\n", peri);
    return 0;
}
