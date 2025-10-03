#include<stdio.h>
int main() {
    int days, years, months;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    months = (days % 365) / 30;
    days = (days % 365) % 30;
    printf("Time = %d years %d months %d days\n", years, months, days);
    return 0;
}
