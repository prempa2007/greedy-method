#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, m;
    int g[30000], s[30000];
    
    if (scanf("%d", &n) != 1) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &g[i]);
    
    if (scanf("%d", &m) != 1) return 1;
    for (int i = 0; i < m; i++) scanf("%d", &s[i]);
    
    qsort(g, n, sizeof(int), compare);
    qsort(s, m, sizeof(int), compare);
    
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (s[j] >= g[i]) {
            i++;
        }
        j++;
    }
    
    printf("%d\n", i);
    return 0;
}
