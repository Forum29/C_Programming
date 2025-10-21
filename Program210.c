#include <stdio.h>

int largest(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int a[] = {2, 5, 1, 9, 4};
    printf("Largest = %d", largest(a, 5));
    return 0;
}
