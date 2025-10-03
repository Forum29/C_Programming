#include<stdio.h>
int main() {
    float oldVal, newVal, decrease;
    printf("Enter old and new value: ");
    scanf("%f %f", &oldVal, &newVal);
    decrease = ((oldVal - newVal) / oldVal) * 100;
    printf("Percentage Decrease = %.2f%%\n", decrease);
    return 0;
}
