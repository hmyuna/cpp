#include <bits/stdc++.h>
using namespace std;
#define For(i, a, b) for(int i = a; i <= b; i++)
bool used[21];
int a[21], n, m, ans = 0;
bool P(int);
void dfs(int u, int sum, int t) {
    if (u == m + 1) {
        if (P(sum) == 1){
			ans++;
		}
        return;
    }
    for (int i = t; i <= n; i++)
        if (used[i] == 0) {
            used[i] = 1;
            dfs(u + 1, sum + a[i], i + 1);
            used[i] = 0;
        }
}
bool P(int x){
    if (x == 1) return 0;
    if (x == 2) return 1;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dfs(1, 0, 1);
    cout << ans << endl;
    return 0;
}
