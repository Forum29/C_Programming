#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op) {
        case '+': printf("%.2f\n", a+b); break;
        case '-': printf("%.2f\n", a-b); break;
        case '*': printf("%.2f\n", a*b); break;
        case '/': printf("%.2f\n", a/b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
