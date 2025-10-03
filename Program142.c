#include<stdio.h>
int main() {
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while(temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    printf("Reverse of %d = %d\n", n, rev);
    return 0;
}
