#include <stdio.h>
int trace(int m[3][3]){
    int s=0;
    for(int i=0;i<3;i++) s+=m[i][i];
    return s;
}
int main(){
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Trace = %d", trace(m));
}
