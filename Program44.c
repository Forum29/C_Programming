#include<stdio.h>
int main() {
    float s1, s2, s3, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3;
    printf("Average = %.2f\n", avg);
    return 0;
}
