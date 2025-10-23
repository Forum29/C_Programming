#include <stdio.h>
int main() {
    char c;
    printf("Enter character: ");
    scanf(" %c", &c);

    switch((c == 'a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
        case 1: printf("Vowel"); break;
        default: printf("Not a vowel");
    }
    return 0;
}
