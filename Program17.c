#include<stdio.h>
int main() {
    float miles, km;
    printf("Enter distance in miles: ");
    scanf("%f", &miles);
    km = miles / 0.621371;
    printf("Distance in kilometers = %.2f\n", km);
    return 0;
}
