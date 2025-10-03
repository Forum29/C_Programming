#include<stdio.h>
int main() {
    float usd, rs;
    printf("Enter amount in Dollars: ");
    scanf("%f", &usd);
    rs = usd * 83.0;  // Example conversion rate
    printf("Amount in Rupees = %.2f\n", rs);
    return 0;
}
