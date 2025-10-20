#include <stdio.h>
int main() {
    int choice, i, j;
    printf("1. Half Pyramid\n2. Inverted Pyramid\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(i=1; i<=5; i++) {
                for(j=1; j<=i; j++) printf("* ");
                printf("\n");
            }
            break;
        case 2:
            for(i=5; i>=1; i--) {
                for(j=1; j<=i; j++) printf("* ");
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
