#include <stdio.h>

int isLeap(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int main() {
    printf("%d", isLeap(2024));
    return 0;
}
