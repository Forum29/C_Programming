#include <stdio.h>
#include <string.h>
int main() {
    char month[15];
    printf("Enter month: ");
    scanf("%s", month);

    switch(month[0]) {
        case 'J': case 'j':
            if(strcmp(month, "June")==0 || strcmp(month, "July")==0) printf("Summer");
            else printf("Winter");
            break;
        case 'A': printf("Rainy"); break;
        default: printf("Unknown Season");
    }
    return 0;
}
