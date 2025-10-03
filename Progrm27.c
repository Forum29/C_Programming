#include<stdio.h>
int main() {
    float oldVal, newVal, increase;
    printf("Enter old and new value: ");
    scanf("%f %f", &oldVal, &newVal);
    increase = ((newVal - oldVal) / oldVal) * 100;
    printf("Percentage Increase = %.2f%%\n", increase);
    return 0;
}
