#include<stdio.h>
int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;
    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (float)total / 5;
    printf("Total = %d, Percentage = %.2f%%\n", total, percentage);
    return 0;
}
