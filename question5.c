#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compareDescending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);
    
    // Minimum product sum: sort one ascending and the other descending
    qsort(arr1, n, sizeof(int), compare);
    qsort(arr2, n, sizeof(int), compareDescending);
    
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr1[i] * arr2[i];
    }
    
    printf("%d\n", total);
    return 0;
}
