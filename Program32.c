#include<stdio.h>
int main() {
    int weeks, days;
    printf("Enter number of weeks: ");
    scanf("%d", &weeks);
    days = weeks * 7;
    printf("%d weeks = %d days\n", weeks, days);
    return 0;
}
