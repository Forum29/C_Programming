#include <stdio.h>

int main() {
 char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("Result = %f", a + b); break;
        case '-': printf("Result = %f", a - b); break;
        case '*': printf("Result = %f", a * b); break;
        case '/': printf("Result = %f", a / b); break;
        default: printf("Invalid operator");
    }
return 0;
}
