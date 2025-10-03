#include<stdio.h>
int main() {
    int hrs, min, sec;
    printf("Enter hours: ");
    scanf("%d", &hrs);
    min = hrs * 60;
    sec = hrs * 3600;
    printf("%d hours = %d minutes = %d seconds\n", hrs, min, sec);
    return 0;
}
