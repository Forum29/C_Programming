#include<stdio.h>
int main() {
    float p, r, si;
    int t, i;
    printf("Enter Principal, Rate, and Time (in years): ");
    scanf("%f %f %d", &p, &r, &t);
    for(i = 1; i <= t; i++) {
        si = (p * r * i) / 100;
        printf("Simple Interest after %d year(s) = %.2f\n", i, si);
    }
    return 0;
}
