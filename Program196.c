#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(isupper(ch)) {
        case 1: printf("Lowercase: %c", tolower(ch)); break;
        case 0: printf("Uppercase: %c", toupper(ch)); break;
    }
    return 0;
}
