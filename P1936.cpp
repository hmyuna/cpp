#include <bits/stdc++.h>
int main() {
    int k, m = 1, n = 1;
    scanf("%d", &k);
    while (n + m <= k) {
        n += m;
        m = n - m;
    }
    printf("m=%d\nn=%d", m, n);
    return 0;
}
