#include<stdio.h>
int main() {
    float basic, hra, da, total;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    printf("Enter HRA and DA: ");
    scanf("%f %f", &hra, &da);
    total = basic + hra + da;
    printf("Total Salary = %.2f\n", total);
    return 0;
}
