#include <stdio.h>
int main() {
    int code;
    float salary;
    printf("Enter role code (1-Manager, 2-Clerk, 3-Worker): ");
    scanf("%d", &code);
    printf("Enter salary: ");
    scanf("%f", &salary);

    switch(code) {
        case 1: printf("Bonus = %.2f", salary*0.2); break;
        case 2: printf("Bonus = %.2f", salary*0.1); break;
        case 3: printf("Bonus = %.2f", salary*0.05); break;
        default: printf("Invalid code");
    }
    return 0;
}
