#include <stdio.h>
int sumDigits(int n){ int s=0; while(n){ s+=n%10; n/=10; } return s; }
int main(){ int n; scanf("%d",&n); printf("Sum=%d", sumDigits(n)); }
