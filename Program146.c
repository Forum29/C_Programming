#include<stdio.h>
int main() {
    int m1, m2, m3, total;
    float perc;
    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    perc = (float)total / 3;
    printf("Total = %d, Percentage = %.2f%%\n", total, perc);
    if(perc >= 75)
        printf("Result: Distinction\n");
    else if(perc >= 60)
        printf("Result: First Class\n");
    else if(perc >= 50)
        printf("Result: Second Class\n");
    else
        printf("Result: Fail\n");
    return 0;
}
