#include <stdio.h>
int main() {
    int choice;
    float area, r, l, b;
    printf("1. Circle\n2. Rectangle\n3. Square\n");
    printf("Enter your choice to calculate the area: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area of Circle = %.2f", area);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area of Rectangle = %.2f", area);
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &l);
            area = l * l;
            printf("Area of Square = %.2f", area);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
