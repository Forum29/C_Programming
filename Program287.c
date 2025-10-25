#include <stdio.h>
void diagSum(int a[3][3]){
    int main=0, sec=0;
    for(int i=0;i<3;i++){ main+=a[i][i]; sec+=a[i][2-i]; }
    printf("Main=%d Secondary=%d",main,sec);
}
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    diagSum(a);
}
