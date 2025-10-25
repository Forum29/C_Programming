#include <stdio.h>
void countEvenOdd(int a[], int n){
    int e=0,o=0;
    for(int i=0;i<n;i++) (a[i]%2==0)?e++:o++;
    printf("Even=%d Odd=%d",e,o);
}
int main(){
    int a[5]={2,7,6,3,8};
    countEvenOdd(a,5);
}
