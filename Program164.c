#include<stdio.h>
int main() {
    int n, i, num, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > 0)
            sum += num;
    }
    printf("Sum of positive numbers = %d\n", sum);
    return 0;
}
