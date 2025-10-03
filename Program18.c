#include<stdio.h>
int main() {
    float cm, inch;
    printf("Enter length in centimeters: ");
    scanf("%f", &cm);
    inch = cm / 2.54;
    printf("Length in inches = %.2f\n", inch);
    return 0;
}
