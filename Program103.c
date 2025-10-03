#include<stdio.h>
int main() {
    int n, i, num;
    long product = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        product *= num;
    }
    printf("Product = %ld\n", product);
    return 0;
}
