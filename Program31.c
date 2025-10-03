#include<stdio.h>
int main() {
    int days, weeks;
    printf("Enter number of days: ");
    scanf("%d", &days);
    weeks = days / 7;
    printf("%d days = %d weeks\n", days, weeks);
    return 0;
}
