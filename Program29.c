#include<stdio.h>
int main() {
    int hrs, mins;
    printf("Enter hours: ");
    scanf("%d", &hrs);
    mins = hrs * 60;
    printf("%d hours = %d minutes\n", hrs, mins);
    return 0;
}
