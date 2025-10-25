#include <stdio.h>
#include <math.h>
int isArmstrong(int n){
    int temp=n,d=0,sum=0;
    while(temp){ temp/=10; d++; }
    temp=n;
    while(temp){ int r=temp%10; sum+=pow(r,d); temp/=10; }
    return sum==n;
}
int main(){ int n; scanf("%d",&n); printf(isArmstrong(n)?"Armstrong":"Not"); }
