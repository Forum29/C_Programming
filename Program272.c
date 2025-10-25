#include <stdio.h>
void swapEnds(int a[], int n){
    int t=a[0]; a[0]=a[n-1]; a[n-1]=t;
}
int main(){
    int a[5]={1,2,3,4,5};
    swapEnds(a,5);
    for(int i=0;i<5;i++) printf("%d ",a[i]);
}
