#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort in ascending order so larger numbers get larger index weights
    qsort(arr, n, sizeof(int), compare);
    
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i] * i;
    }
    
    printf("%d\n", total);
    return 0;
}
