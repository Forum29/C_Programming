#include <stdio.h>
#include <ctype.h>

void toUpperCase(char str[]) {
    for(int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

int main() {
    char str[] = "hello";
    toUpperCase(str);
    printf("%s", str);
    return 0;
}
