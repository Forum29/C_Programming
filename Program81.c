#include<stdio.h>
#include<math.h>
int main() {
    float p, r, ci;
    int t;
    printf("Enter Principal, Rate, and Time (in years): ");
    scanf("%f %f %d", &p, &r, &t);
    ci = p * pow((1 + r/100), t) - p;
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}
