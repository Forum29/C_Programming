#include <stdio.h>
int main() {
    int wheels;
    printf("Enter number of wheels: ");
    scanf("%d", &wheels);

    switch(wheels) {
        case 2: printf("Bike"); break;
        case 3: printf("Auto Rickshaw"); break;
        case 4: printf("Car"); break;
        case 6: printf("Truck"); break;
        default: printf("Unknown Vehicle");
    }
    return 0;
}
