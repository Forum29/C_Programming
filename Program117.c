#include<stdio.h>
int main() {
    float miles, km;
    printf("Enter distance in miles: ");
    scanf("%f", &miles);
    km = miles / 0.621371;
    printf("%.2f miles = %.2f km\n", miles, km);
    return 0;
}
