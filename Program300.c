#include <stdio.h>
int power(int b,int e){ int p=1; for(int i=1;i<=e;i++) p*=b; return p; }
int main(){ int b,e; scanf("%d%d",&b,&e); printf("%d", power(b,e)); }
