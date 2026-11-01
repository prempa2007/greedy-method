#include <stdio.h>
#include <math.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort in descending order to minimize power multipliers
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += (pow(n, i)) * arr[i];
    }
    
    printf("%d\n", s);
    return 0;
}
