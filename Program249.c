#include <stdio.h>
int main() {
    int ch;
    float a,b,h;
    printf("1.Cube\n2.Cuboid\n3.Cylinder\nChoice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1: printf("Enter side: "); scanf("%f",&a); printf("Volume = %.2f",a*a*a); break;
        case 2: printf("Enter l,b,h: "); scanf("%f%f%f",&a,&b,&h); printf("Volume = %.2f",a*b*h); break;
        case 3: printf("Enter r,h: "); scanf("%f%f",&a,&h); printf("Volume = %.2f",3.1416*a*a*h); break;
        default: printf("Invalid");
    }
    return 0;
}
