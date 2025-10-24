#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        case 1: printf("Alphabet\n"); break;
        default: printf("Not an alphabet\n");
    }
    return 0;
}
