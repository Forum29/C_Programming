#include<stdio.h>
int main() {
    int n, i;
    float expense, total = 0, avg;
    printf("Enter number of expenses: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter expense %d: ", i);
        scanf("%f", &expense);
        total += expense;
    }
    avg = total / n;
    printf("Total Expenses = %.2f, Average Expense = %.2f\n", total, avg);
    return 0;
}
