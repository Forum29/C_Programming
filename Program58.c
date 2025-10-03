#include<stdio.h>
#include<math.h>
int main() {
    float p, r, t, n, ci;
    printf("Enter Principal, Rate, Time, and Compounding times per year: ");
    scanf("%f %f %f %f", &p, &r, &t, &n);
    ci = p * pow((1 + (r / (100 * n))), n * t) - p;
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}
