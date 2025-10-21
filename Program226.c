#include <stdio.h>
#include <ctype.h>

int countVowels(char str[]) {
    int count = 0;
    for(int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }
    return count;
}

int main() {
    printf("Vowels = %d", countVowels("Forum Tailor"));
    return 0;
}
