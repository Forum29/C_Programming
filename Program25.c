#include<stdio.h>
#include<math.h>
int main() {
    float base, exp, result;
    printf("Enter base and exponent: ");
    scanf("%f %f", &base, &exp);
    result = pow(base, exp);
    printf("Result = %.2f\n", result);
    return 0;
}
