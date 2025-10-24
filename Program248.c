#include <stdio.h>
int main() {
    int ch;
    printf("1.Horizontal stars\n2.Vertical stars\nChoice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1: for(int i=0;i<5;i++) printf("* "); break;
        case 2: for(int i=0;i<5;i++) printf("*\n"); break;
        default: printf("Invalid");
    }
    return 0;
}
