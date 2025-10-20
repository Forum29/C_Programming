#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    switch(a > b && a > c) {
        case 1: max = a; break;
        case 0:
            switch(b > c) {
                case 1: max = b; break;
                case 0: max = c; break;
            }
    }
    printf("Largest number = %d", max);
    return 0;
}
