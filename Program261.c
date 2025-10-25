#include <stdio.h>
int perimeter(int l, int w) { return 2 * (l + w); }
int main() {
    int l, w;
    scanf("%d %d", &l, &w);
    printf("Perimeter = %d", perimeter(l, w));
}
