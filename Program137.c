#include<stdio.h>
int main() {
    float distance, time, speed;
    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);
    printf("Enter time taken (hours): ");
    scanf("%f", &time);
    if(time != 0) {
        speed = distance / time;
        printf("Average Speed = %.2f km/hr\n", speed);
    } else {
        printf("Error: Time cannot be zero!\n");
    }
    return 0;
}
