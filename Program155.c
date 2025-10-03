#include<stdio.h>
int main() {
    float originalPrice, discountPrice, discountPercent;
    printf("Enter original price: ");
    scanf("%f", &originalPrice);
    printf("Enter discount price: ");
    scanf("%f", &discountPrice);
    discountPercent = ((originalPrice - discountPrice)/originalPrice)*100;
    printf("Discount Percentage = %.2f%%\n", discountPercent);
    return 0;
}
