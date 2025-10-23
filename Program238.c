#include <stdio.h>
int main() {
    int marks, choice;
    printf("Enter marks: ");
    scanf("%d", &marks);
    printf("1. Check Grade\n2. Pass/Fail\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if(marks >= 90) printf("A+");
            else if(marks >= 75) printf("A");
            else if(marks >= 60) printf("B");
            else if(marks >= 40) printf("C");
            else printf("D");
            break;
        case 2:
            switch(marks >= 40) {
                case 1: printf("Pass"); break;
                case 0: printf("Fail");
            }
            break;
        default: printf("Invalid choice");
    }
    return 0;
}
