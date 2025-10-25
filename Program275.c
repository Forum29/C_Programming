#include <stdio.h>
int sumSquares(int n){ int s=0; for(int i=1;i<=n;i++) s+=i*i; return s; }
int main(){ int n; scanf("%d",&n); printf("Sum of squares=%d", sumSquares(n)); }
