#include <stdio.h>
int main() {
    int lux;
    printf("Enter light intensity (in lux): ");
    scanf("%d", &lux);

    switch(lux / 100) {
        case 0: printf("Dark"); break;
        case 1: case 2: printf("Dim"); break;
        case 3: case 4: printf("Bright"); break;
        default: printf("Very Bright");
    }
    return 0;
}
