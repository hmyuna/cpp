#include <bits/stdc++.h>
#define MAXN 500010
#define lowbit(i) i & -i
using namespace std;

int n, m;

int  a[MAXN], tree[MAXN];
void add(int x, int a)
{
    for (int i = x; i <= n; i += lowbit(i)) tree[i] += a;
}
int sum(int x)
{
    int ans = 0;
    for (int i = x; i != 0; i -= lowbit(i)) ans += tree[i];
    return ans;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        add(i, a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        int opt, x, y;
        cin >> opt >> x >> y;
        if (opt == 1)
            add(x, y);
        else
            cout << sum(y) - sum(x - 1) << endl;
    }
    return 0;
}