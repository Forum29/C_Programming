#include <stdio.h>
#define PI 3.1416

float areaCircle(float r) {
    return PI * r * r;
}

int main() {
    printf("Area = %.2f", areaCircle(5));
    return 0;
}
