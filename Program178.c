#include <stdio.h>
int main() {
    char color;
    printf("Enter traffic light color (R/Y/G): ");
    scanf(" %c", &color);

    switch(color) {
        case 'R': case 'r': printf("STOP"); break;
        case 'Y': case 'y': printf("READY"); break;
        case 'G': case 'g': printf("GO"); break;
        default: printf("Invalid color");
    }
    return 0;
}
