#include <stdio.h>
int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
    return 1;
}
int countPrime(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++) if(isPrime(a[i])) c++;
    return c;
}
int main(){
    int a[5]={2,4,5,9,11};
    printf("Prime count=%d", countPrime(a,5));
}
