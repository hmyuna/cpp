#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k, i, j, o, p, q, s, ans = 0;
    cin >> n >> m >> k;
    int g[n + 5][n + 5];
    memset(g, 0, sizeof(g));
    for(i = 1; i <= m; i++){
        cin >> o >> p;
        g[o + 2][p] = 1;
        g[o][p + 2] = 1;
        g[o - 2][p] = 1;
        g[o][p - 2] = 1;
        g[o + 1][p] = 1;
        g[o + 1][p + 1] = 1;
        g[o + 1][p - 1] = 1;
        g[o][p + 1] = 1;
        g[o][p] = 1;
        g[o][p - 1] = 1;
        g[o - 1][p] = 1;
        g[o - 1][p + 1] = 1;
        g[o - 1][p - 1] = 1;
    }
    for(i = 1; i <= k; i++){
        cin >> q >> s;
        g[q - 2][s - 2] = 1;
        g[q - 2][s - 1] = 1;
        g[q - 2][s] = 1;
        g[q - 2][s + 1] = 1;
        g[q - 2][s + 2] = 1;
        g[q - 1][s - 2] = 1;
        g[q - 1][s - 1] = 1;
        g[q - 1][s] = 1;
        g[q - 1][s + 1] = 1;
        g[q - 1][s + 2] = 1;
        g[q][s - 2] = 1;
        g[q][s - 1] = 1;
        g[q][s] = 1;
        g[q][s + 1] = 1;
        g[q][s + 2] = 1;
        g[q + 1][s - 2] = 1;
        g[q + 1][s - 1] = 1;
        g[q + 1][s] = 1;
        g[q + 1][s + 1] = 1;
        g[q + 1][s + 2] = 1;
        g[q + 2][s - 2] = 1;
        g[q + 2][s - 1] = 1;
        g[q + 2][s] = 1;
        g[q + 2][s + 1] = 1;
        g[q + 2][s + 2] = 1;
    }
    for(i = 1; i <= n; i++){
        for(j=1; j <= n; j++){
            if(g[i][j] == 0)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
