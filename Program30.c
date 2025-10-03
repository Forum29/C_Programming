#include<stdio.h>
int main() {
    int mins;
    float hrs;
    printf("Enter minutes: ");
    scanf("%d", &mins);
    hrs = mins / 60.0;
    printf("%d minutes = %.2f hours\n", mins, hrs);
    return 0;
}
