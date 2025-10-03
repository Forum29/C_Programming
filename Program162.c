#include<stdio.h>
int main() {
    int years, days, hours, minutes;
    printf("Enter number of years: ");
    scanf("%d", &years);
    days = years * 365;
    hours = days * 24;
    minutes = hours * 60;
    printf("%d years = %d days = %d hours = %d minutes\n", years, days, hours, minutes);
    return 0;
}
