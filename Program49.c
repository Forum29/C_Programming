#include<stdio.h>
int main() {
    float ft, m;
    printf("Enter length in feet: ");
    scanf("%f", &ft);
    m = ft / 3.28084;
    printf("Length in meters = %.2f\n", m);
    return 0;
}
