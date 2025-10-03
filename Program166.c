#include<stdio.h>
int main() {
    float income, expense, savings, perc;
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter monthly expense: ");
    scanf("%f", &expense);
    if(income != 0) {
        savings = income - expense;
        perc = (savings / income) * 100;
        printf("Savings = %.2f, Savings Percentage = %.2f%%\n", savings, perc);
    } else {
        printf("Income cannot be zero!\n");
    }
    return 0;
}
