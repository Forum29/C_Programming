#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    switch(0) {
        case 0:
            if(n % 3 == 0 && n % 5 == 0) printf("Divisible by both 3 and 5");
            else if(n % 3 == 0) printf("Divisible by 3");
            else if(n % 5 == 0) printf("Divisible by 5");
            else printf("Not divisible by 3 or 5");
    }
    return 0;
}
