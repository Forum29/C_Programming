#include<stdio.h>
int main() {
    int i;
    float temp, sum = 0, avg;
    for(i = 1; i <= 7; i++) {
        printf("Enter temperature for day %d: ", i);
        scanf("%f", &temp);
        sum += temp;
    }
    avg = sum / 7;
    printf("Average Temperature = %.2f\n", avg);
    return 0;
}
