#include <stdio.h>

int strLength(char str[]) {
    int len = 0;
    while(str[len] != '\0')
        len++;
    return len;
}

int main() {
    printf("Length = %d", strLength("Forum"));
    return 0;
}
