#include<stdio.h>
int main() {
    int n, i, num, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    avg = (float)sum / n;
    printf("Average = %.2f\n", avg);
    return 0;
}
