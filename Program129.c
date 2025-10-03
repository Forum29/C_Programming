#include<stdio.h>
int main() {
    float rs, usd, rate;
    printf("Enter amount in Rupees: ");
    scanf("%f", &rs);
    printf("Enter conversion rate (1 USD = ? INR): ");
    scanf("%f", &rate);
    usd = rs / rate;
    printf("Amount in USD = %.2f\n", usd);
    return 0;
}
