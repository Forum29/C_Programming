#include<stdio.h>
int main() {
    float usd, rs, rate;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);
    printf("Enter conversion rate (1 USD = ? INR): ");
    scanf("%f", &rate);
    if(rate != 0) {
        rs = usd * rate;
        printf("Amount in INR = %.2f\n", rs);
    } else {
        printf("Error: Conversion rate cannot be zero!\n");
    }
    return 0;
}
