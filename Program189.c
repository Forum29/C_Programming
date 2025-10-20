#include <stdio.h>
int main() {
    char grade;
    printf("Enter your grade (A/B/C/D/F): ");
    scanf(" %c", &grade);

    switch(grade) {
        case 'A': printf("Excellent!"); break;
        case 'B': printf("Good Work!"); break;
        case 'C': printf("Fair!"); break;
        case 'D': printf("Needs Improvement!"); break;
        case 'F': printf("Fail!"); break;
        default: printf("Invalid Grade");
    }
    return 0;
}
