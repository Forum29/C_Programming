#include <stdio.h>
#include <ctype.h>
int countUpper(char s[]){
    int c=0;
    for(int i=0;s[i];i++) if(isupper(s[i])) c++;
    return c;
}
int main(){ char s[50]; gets(s); printf("Uppercase=%d", countUpper(s)); }
