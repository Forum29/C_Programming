#include <stdio.h>

int countDigits(int n) {
    int count = 0;
    while(n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    printf("Digits = %d", countDigits(12345));
    return 0;
}
