#include<stdio.h>
int main() {
    float perc;
    printf("Enter percentage: ");
    scanf("%f", &perc);
    if(perc >= 90)
        printf("Grade = A\n");
    else if(perc >= 80)
        printf("Grade = B\n");
    else if(perc >= 70)
        printf("Grade = C\n");
    else if(perc >= 60)
        printf("Grade = D\n");
    else
        printf("Grade = F\n");
    return 0;
}
