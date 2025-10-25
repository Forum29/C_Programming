#include <stdio.h>
int isDivisible(int n){ return (n%3==0 && n%5==0); }
int main(){ int n; scanf("%d",&n); if(isDivisible(n)) printf("Yes"); else printf("No"); }
