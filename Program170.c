#include<stdio.h>
int main() {
    int n, i, marks, total = 0;
    float avg, percentage;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter marks for student %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }
    avg = (float)total / n;
    percentage = avg;
    printf("Total Marks = %d, Average = %.2f, Percentage = %.2f%%\n", total, avg, percentage);
    return 0;
}
