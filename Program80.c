#include<stdio.h>
int main() {
    int m1, m2, m3;
    float w1, w2, w3, avg;
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    printf("Enter weights for each subject: ");
    scanf("%f %f %f", &w1, &w2, &w3);
    avg = (m1*w1 + m2*w2 + m3*w3) / (w1 + w2 + w3);
    printf("Weighted Average = %.2f\n", avg);
    return 0;
}
