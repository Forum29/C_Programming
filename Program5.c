#include<stdio.h>
int main() {
    float a, b, avg;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    avg = (a + b) / 2;
    printf("Average = %.2f\n", avg);
    return 0;
}
