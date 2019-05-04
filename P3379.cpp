#include <bits/stdc++.h>
#define MAXN 500010
using namespace std;
struct Node
{
    int t, nex;
} e[2 * MAXN];
int  Deep[MAXN], fa[MAXN][22], lg[MAXN], head[MAXN];
int  cnt;
void add(int x, int y)
{
    e[++cnt].t = y;
    e[cnt].nex = head[x];
    head[x]    = cnt;
}
void dfs(int f, int fath)
{
    Deep[f]  = Deep[fath] + 1;
    fa[f][0] = fath;
    for (int i = 1; (1 << i) <= Deep[f]; i++)
        fa[f][i] = fa[fa[f][i - 1]][i - 1];
    for (int i = head[f]; i; i = e[i].nex)
        if (e[i].t != fath) dfs(e[i].t, f);
}
int lca(int x, int y)
{
    if (Deep[x] < Deep[y]) swap(x, y);
    while (Deep[x] > Deep[y]) x = fa[x][lg[Deep[x] - Deep[y]] - 1];
    if (x == y) return x;
    for (int k = lg[Deep[x]] - 1; k >= 0; k--)
        if (fa[x][k] != fa[y][k]) x = fa[x][k], y = fa[y][k];
    return fa[x][0];
}
int n, m, s;
int main()
{
    cin >> n >> m >> s;
    for (int i = 1; i <= n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        add(x, y);
        add(y, x);
    }
    dfs(s, 0);
    for (int i = 1; i <= n; i++) lg[i] = lg[i - 1] + (1 << lg[i - 1] == i);
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%d\n", lca(x, y));
    }
    return 0;
}