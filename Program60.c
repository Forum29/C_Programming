#include<stdio.h>
int main() {
    float cost, selling, result;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cost, &selling);
    result = selling - cost;
    if(result > 0)
        printf("Profit = %.2f\n", result);
    else if(result < 0)
        printf("Loss = %.2f\n", -result);
    else
        printf("No Profit, No Loss\n");
    return 0;
}
