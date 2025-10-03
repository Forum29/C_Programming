#include<stdio.h>
int main() {
    int hrs, secs;
    printf("Enter hours: ");
    scanf("%d", &hrs);
    secs = hrs * 3600;
    printf("%d hours = %d seconds\n", hrs, secs);
    return 0;
}
