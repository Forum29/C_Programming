#include <stdio.h>
void reverseArray(int a[], int n){
    for(int i=0;i<n/2;i++){ int t=a[i]; a[i]=a[n-1-i]; a[n-1-i]=t; }
}
int main(){
    int a[5]={1,2,3,4,5};
    reverseArray(a,5);
    for(int i=0;i<5;i++) printf("%d ",a[i]);
}
