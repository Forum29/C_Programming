#include <stdio.h>
void check(int n){ if(n%2==0) printf("Even"); else printf("Odd"); }
int main(){ int n; printf("Enter number: "); scanf("%d",&n); check(n); }
