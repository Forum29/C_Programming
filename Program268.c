#include <stdio.h>
#include <ctype.h>
void checkChar(char c){
    if(isupper(c)) printf("Uppercase");
    else if(islower(c)) printf("Lowercase");
    else if(isdigit(c)) printf("Digit");
    else printf("Special Character");
}
int main(){ char c; scanf("%c",&c); checkChar(c); }
