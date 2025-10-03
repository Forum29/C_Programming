#include<stdio.h>
int main() {
    float ft, m;
    printf("Enter length in feet: ");
    scanf("%f", &ft);
    m = ft / 3.28084;
    printf("%.2f feet = %.2f meters\n", ft, m);
    return 0;
}
