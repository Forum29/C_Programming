#include <stdio.h>
int main() {
    int choice;
    float value;
    printf("1. Km to Meter\n2. Meter to Km\n3. Cm to Inch\n4. Inch to Cm\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice) {
        case 1: printf("Result = %f m", value * 1000); break;
        case 2: printf("Result = %f km", value / 1000); break;
        case 3: printf("Result = %f inch", value / 2.54); break;
        case 4: printf("Result = %f cm", value * 2.54); break;
        default: printf("Invalid choice");
    }
    return 0;
}
