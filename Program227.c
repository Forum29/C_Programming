#include <stdio.h>
#include <math.h>

float compoundInterest(float p, float r, float t) {
    return p * pow((1 + r / 100), t) - p;
}

int main() {
    printf("CI = %.2f", compoundInterest(1000, 5, 2));
    return 0;
}
