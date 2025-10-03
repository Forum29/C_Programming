#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a < b)
        printf("Minimum = %d\n", a);
    else
        printf("Minimum = %d\n", b);
    return 0;
}
