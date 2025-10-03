#include<stdio.h>
#include<math.h>
int main() {
    float p, r, emi;
    int n;
    printf("Enter loan amount, annual interest rate, and number of months: ");
    scanf("%f %f %d", &p, &r, &n);
    r = r / (12 * 100); 
    emi = (p * r * pow(1+r, n)) / (pow(1+r, n) - 1);
    printf("EMI = %.2f\n", emi);
    return 0;
}
