#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    printf("1.Perimeter of Circle\n2.Perimeter of Square\n3.Perimeter of Rectangle\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            float r; printf("Enter radius: "); scanf("%f",&r);
            printf("Perimeter = %.2f", 2*3.1416*r); break;
        }
        case 2: {
            float a; printf("Enter side: "); scanf("%f",&a);
            printf("Perimeter = %.2f", 4*a); break;
        }
        case 3: {
            float l,b; printf("Enter l,b: "); scanf("%f%f",&l,&b);
            printf("Perimeter = %.2f", 2*(l+b)); break;
        }
        default: printf("Invalid");
    }
    return 0;
}
