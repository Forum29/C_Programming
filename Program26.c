#include<stdio.h>
int main() {
    float sum = 0, num, avg;
    int i;
    printf("Enter 10 numbers: ");
    for(i=1; i<=10; i++) {
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / 10;
    printf("Average = %.2f\n", avg);
    return 0;
}
