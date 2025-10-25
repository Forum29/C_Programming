#include <stdio.h>
int greatest(int a,int b,int c){ return (a>b && a>c)?a:(b>c?b:c); }
int main(){ int a,b,c; scanf("%d%d%d",&a,&b,&c); printf("Greatest=%d", greatest(a,b,c)); }
