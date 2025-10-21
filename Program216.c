#include <stdio.h>

float toFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    printf("Fahrenheit = %.2f", toFahrenheit(37));
    return 0;
}
