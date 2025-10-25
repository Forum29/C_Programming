#include <stdio.h>
int sumFirstLast(int n){
    int last = n % 10;
    while(n >= 10) n /= 10;
    return n + last;
}
int main(){ int n; scanf("%d",&n); printf("Sum = %d", sumFirstLast(n)); }
