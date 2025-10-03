#include<stdio.h>
int main() {
    float usd, inr, rate;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);
    printf("Enter conversion rate (1 USD = ? INR): ");
    scanf("%f", &rate);
    inr = usd * rate;
    printf("Amount in INR = %.2f\n", inr);
    return 0;
}
