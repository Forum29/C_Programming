#include<stdio.h>
int main() {
    float oldVal, newVal, change;
    printf("Enter old value and new value: ");
    scanf("%f %f", &oldVal, &newVal);
    change = ((newVal - oldVal) / oldVal) * 100;
    if(change > 0)
        printf("Percentage Increase = %.2f%%\n", change);
    else
        printf("Percentage Decrease = %.2f%%\n", -change);
    return 0;
}
