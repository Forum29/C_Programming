#include<stdio.h>
int main() {
    int days, years, months, remainingDays;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    months = (days % 365) / 30;
    remainingDays = (days % 365) % 30;
    printf("%d days = %d years, %d months, %d days\n", days, years, months, remainingDays);
    return 0;
}
