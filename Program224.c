#include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
    int n = strlen(str);
    for(int i = n - 1; i >= 0; i--)
        printf("%c", str[i]);
}

int main() {
    reverseStr("Cprogram");
    return 0;
}
