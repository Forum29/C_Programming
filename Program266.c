#include <stdio.h>
char grade(int m){
    if(m>=90) return 'A';
    else if(m>=75) return 'B';
    else if(m>=50) return 'C';
    else return 'F';
}
int main(){ int m; scanf("%d",&m); printf("Grade = %c", grade(m)); }
