#include<stdio.h>
int main() {
    float m, ft;
    printf("Enter length in meters: ");
    scanf("%f", &m);
    ft = m * 3.28084;
    printf("%.2f meters = %.2f feet\n", m, ft);
    return 0;
}
