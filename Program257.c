#include <stdio.h>
int main() {
    int choice;
    float r, l, b;
    printf("1.Circle 2.Rectangle 3.Square: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Enter radius: "); scanf("%f", &r);
                printf("Area = %.2f\n", 3.14*r*r); break;
        case 2: printf("Enter length & breadth: "); scanf("%f %f", &l, &b);
                printf("Area = %.2f\n", l*b); break;
        case 3: printf("Enter side: "); scanf("%f", &l);
                printf("Area = %.2f\n", l*l); break;
        default: printf("Invalid\n");
    }
    return 0;
}
