#include<stdio.h>
int main() {
    float distance, time, speed;
    printf("Enter distance (km) and time (hours): ");
    scanf("%f %f", &distance, &time);
    speed = distance / time;
    printf("Average Speed = %.2f km/hr\n", speed);
    return 0;
}
