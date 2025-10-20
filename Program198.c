#include <stdio.h>
int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    switch(x > 0 && y > 0 ? 1 : x < 0 && y > 0 ? 2 : x < 0 && y < 0 ? 3 : x > 0 && y < 0 ? 4 : 0) {
        case 1: printf("1st Quadrant"); break;
        case 2: printf("2nd Quadrant"); break;
        case 3: printf("3rd Quadrant"); break;
        case 4: printf("4th Quadrant"); break;
        default: printf("Lies on Axis");
    }
    return 0;
}
