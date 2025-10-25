#include <stdio.h>
void checkVote(int age){
    if(age>=18) printf("Eligible");
    else printf("Not Eligible");
}
int main(){ int age; scanf("%d",&age); checkVote(age); }
