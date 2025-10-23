#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units: ");
    scanf("%d", &units);

    switch(units / 100) {
        case 0: bill = units * 1.5; break;
        case 1: case 2: bill = units * 2.0; break;
        case 3: case 4: bill = units * 3.0; break;
        default: bill = units * 5.0;
    }
    printf("Bill = Rs. %.2f", bill);
    return 0;
}
