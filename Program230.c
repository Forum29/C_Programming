#include <stdio.h>

int min3(int a, int b, int c) {
    if (a < b && a < c) return a;
    else if (b < c) return b;
    else return c;
}

int main() {
    printf("Min = %d", min3(5, 9, 2));
    return 0;
}
