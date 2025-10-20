#include <stdio.h>
int main() {
    int month;
    printf("Enter month number (1–12): ");
    scanf("%d", &month);

    switch(month) {
        case 12: case 1: case 2:
            printf("Winter Season"); break;
        case 3: case 4: case 5:
            printf("Summer Season"); break;
        case 6: case 7: case 8: case 9:
            printf("Monsoon Season"); break;
        case 10: case 11:
            printf("Autumn Season"); break;
        default: printf("Invalid month number");
    }
    return 0;
}
