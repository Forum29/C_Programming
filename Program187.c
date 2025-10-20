#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);

    switch(isalpha(ch) ? 1 : (isdigit(ch) ? 2 : 3)) {
        case 1: printf("Alphabet"); break;
        case 2: printf("Digit"); break;
        case 3: printf("Special Symbol"); break;
    }
    return 0;
}
