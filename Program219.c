#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main() {
    printf("Power = %d", power(2, 5));
    return 0;
}
