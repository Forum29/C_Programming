#include <stdio.h>
int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d%d", &x, &y);

    switch((x>0 && y>0)?1:(x<0 && y>0)?2:(x<0 && y<0)?3:(x>0 && y<0)?4:0) {
        case 1: printf("Quadrant I"); break;
        case 2: printf("Quadrant II"); break;
        case 3: printf("Quadrant III"); break;
        case 4: printf("Quadrant IV"); break;
        default: printf("On Axis");
    }
    return 0;
}
