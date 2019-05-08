#include <bits/stdc++.h>
using namespace std;
vector<int> E[305];
int         id[305], r[305], d[305], v[305];
int         f[305][305];
int         n, m, cnt = 0;
void        dfs(int u)
{
    id[u]  = cnt;
    d[cnt] = u;
    cnt++;
    for (int i = 0; i < E[u].size(); i++)
    {
        int now = E[u][i];
        dfs(now);
    }
    r[id[u]] = cnt;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k >> v[i];
        E[k].push_back(i);
    }
    dfs(0);
    for (int i = n; i >= 0; i--)
        for (int j = 0; j <= n; j++)
            if (j >= 1)
                f[i][j] = max(f[r[i]][j], f[i + 1][j - 1] + v[d[i]]);
            else
                f[i][j] = f[r[i]][j];
    cout << f[0][m + 1] << endl;
    return 0;
}