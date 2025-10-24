#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float p, r, t;

    printf("Enter P, R, T: ");
    scanf("%f%f%f", &p, &r, &t);
    printf("1.Simple Interest\n2.Compound Interest\nChoice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("SI = %.2f", (p*r*t)/100); break;
        case 2: printf("CI = %.2f", p*pow(1+r/100,t)-p); break;
        default: printf("Invalid");
    }
    return 0;
}
