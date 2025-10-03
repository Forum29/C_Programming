#include<stdio.h>
int main() {
    float rs, usd;
    printf("Enter amount in Rupees: ");
    scanf("%f", &rs);
    usd = rs / 83.0;  // Example conversion rate
    printf("Amount in Dollars = %.2f\n", usd);
    return 0;
}
