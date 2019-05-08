#include <bits/stdc++.h>
using namespace std;
int f[2010];
int n, m, ans = 0;
int find(int x)
{
    if (f[x] != x) f[x] = find(f[x]);
    return f[x];
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= 2 * n; i++) f[i] = i;
    for (int i = 1; i <= m; i++)
    {
        char a;
        int  x, y;
        cin >> a >> x >> y;
        if (a == 'F')
            f[find(x)] = find(y);
        else
            f[find(x + n)] = find(y), f[find(y + n)] = find(x);
    }
    for (int i = 1; i <= n; i++)
        if (f[i] == i) ans++;
    cout << ans << endl;
    return 0;
}