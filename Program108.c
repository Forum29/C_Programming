#include<stdio.h>
int main() {
    int n, i, marks, total = 0;
    float percentage;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }
    percentage = (float)total / n;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
