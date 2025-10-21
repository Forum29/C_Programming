#include <stdio.h>

float average(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    printf("Average = %.2f", average(5, 10, 15));
    return 0;
}
