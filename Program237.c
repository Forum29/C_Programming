#include <stdio.h>
int main() {
    int sides;
    printf("Enter number of sides: ");
    scanf("%d", &sides);

    switch(sides) {
        case 3: printf("Triangle"); break;
        case 4: printf("Quadrilateral"); break;
        case 5: printf("Pentagon"); break;
        case 6: printf("Hexagon"); break;
        default: printf("Shape not defined");
    }
    return 0;
}
