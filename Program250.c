#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: case 7: printf("Weekend\n"); break;
        default: printf("Weekday\n");
    }
    return 0;
}
