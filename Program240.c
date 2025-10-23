#include <stdio.h>
int main() {
    int t;
    printf("Enter temperature: ");
    scanf("%d", &t);

    switch(t / 10) {
        case 0: case 1: printf("Cold"); break;
        case 2: case 3: printf("Warm"); break;
        case 4: case 5: printf("Hot"); break;
        default: printf("Extreme");
    }
    return 0;
}
