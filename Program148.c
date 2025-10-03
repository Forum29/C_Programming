#include<stdio.h>
int main() {
    int minutes, hrs, sec;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hrs = minutes / 60;
    sec = minutes * 60;
    printf("%d minutes = %d hours = %d seconds\n", minutes, hrs, sec);
    return 0;
}
