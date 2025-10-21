#include <stdio.h>

void table(int n) {
    for(int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
}

int main() {
    table(7);
    return 0;
}
