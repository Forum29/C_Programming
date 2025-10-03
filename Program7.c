#include<stdio.h>
int main() {
    float total, obtained, percentage;
    printf("Enter total marks and obtained marks: ");
    scanf("%f %f", &total, &obtained);
    percentage = (obtained / total) * 100;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
