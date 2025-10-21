#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Max = %d", max(10, 20));
    return 0;
}
