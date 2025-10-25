#include <stdio.h>
#include <string.h>
int countSpaces(char s[]){
    int c=0;
    for(int i=0;s[i];i++) if(s[i]==' ') c++;
    return c;
}
int main(){
    char s[50]; gets(s);
    printf("Spaces=%d", countSpaces(s));
}
