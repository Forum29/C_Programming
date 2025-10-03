#include<stdio.h>
int main() {
    float rs, euro, rate;
    printf("Enter amount in Rupees: ");
    scanf("%f", &rs);
    printf("Enter conversion rate (1 Euro = ? INR): ");
    scanf("%f", &rate);
    euro = rs / rate;
    printf("Amount in Euros = %.2f\n", euro);
    return 0;
}
