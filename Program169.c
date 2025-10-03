#include<stdio.h>
int main() {
    int n, i, num;
    long sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num * num * num;
    }
    printf("Sum of cubes = %ld\n", sum);
    return 0;
}
