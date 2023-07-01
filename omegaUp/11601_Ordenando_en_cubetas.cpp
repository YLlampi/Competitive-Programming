#include <cstdio>
#include <cstring>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    int count[n+1];
    memset(count, 0, sizeof(count));
    
    for (int i = 0; i < m; i++) {
        int a;
        scanf("%d", &a);
        count[a]++;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d: %d\n", i, count[i]);
    }

    return 0;
}