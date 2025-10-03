#include<stdio.h>
int main() {
    float distance, fuel, mileage;
    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);
    printf("Enter fuel used (liters): ");
    scanf("%f", &fuel);
    mileage = distance / fuel;
    printf("Mileage = %.2f km/l\n", mileage);
    return 0;
}
