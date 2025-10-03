#include<stdio.h>
int main() {
    int a, b, c, d, e, max;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    if(e > max) max = e;
    printf("Maximum = %d\n", max);
    return 0;
}
