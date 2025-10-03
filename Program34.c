#include<stdio.h>
int main() {
    int secs;
    float hrs;
    printf("Enter seconds: ");
    scanf("%d", &secs);
    hrs = secs / 3600.0;
    printf("%d seconds = %.2f hours\n", secs, hrs);
    return 0;
}
