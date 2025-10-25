#include <stdio.h>
int binaryToDecimal(long n){
    int base=1, dec=0, rem;
    while(n>0){ rem=n%10; dec+=rem*base; base*=2; n/=10; }
    return dec;
}
int main(){ long n; scanf("%ld",&n); printf("Decimal=%d", binaryToDecimal(n)); }
