#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return temp == rev;
}

int main() {
    printf("%d", isPalindrome(121));
    return 0;
}
