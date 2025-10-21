#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    printf("SI = %.2f", simpleInterest(1000, 5, 2));
    return 0;
}
