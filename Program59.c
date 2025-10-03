#include<stdio.h>
int main() {
    float price, discount, finalPrice;
    printf("Enter original price: ");
    scanf("%f", &price);
    printf("Enter discount percentage: ");
    scanf("%f", &discount);
    finalPrice = price - (price * discount / 100);
    printf("Final Price after Discount = %.2f\n", finalPrice);
    return 0;
}
