#include<stdio.h>
int main() {
    int n, i, num, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Number of elements must be positive.\n");
        return 0;
    }
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;
    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > max) max = num;
        if(num < min) min = num;
    }
    printf("Maximum = %d, Minimum = %d\n", max, min);
    return 0;
}
