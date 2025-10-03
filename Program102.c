#include<stdio.h>
int main() {
    int n, i, sum = 0, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
