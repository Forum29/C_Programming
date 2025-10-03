#include<stdio.h>
int main() {
    float salary, tax, netSalary;
    printf("Enter Salary: ");
    scanf("%f", &salary);
    printf("Enter Tax Percentage: ");
    scanf("%f", &tax);
    netSalary = salary - (salary * tax / 100);
    printf("Net Salary = %.2f\n", netSalary);
    return 0;
}
