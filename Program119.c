#include<stdio.h>
int main() {
    int n, i, num, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &result);
    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        result -= num;
    }
    printf("Result after subtraction = %d\n", result);
    return 0;
}
