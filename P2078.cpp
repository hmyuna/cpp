#include <bits/stdc++.h>
using namespace std;
int			  n, m, p, q, t1, t2;
map<int, int> f;
int			  find(int x)
{
	return x == f[x] ? x : f[x] = find(f[x]);
}
void Union(int x, int y)
{
	f[find(x)] = find(y);
}
bool Judge(int x, int y)
{
	return find(x) == find(y);
}
int main()
{
	cin >> n >> m >> p >> q;
	for (int i = -m; i <= n; i++) f[i] = i;
	for (int i = 1; i <= p + q; i++)
	{
		int u, v;
		cin >> u >> v;
		Union(u, v);
	}
	for (int i = -m; i <= -1; i++)
		if (Judge(f[i], -1)) t1++;
	for (int i = 1; i <= n; i++)
		if (Judge(f[i], 1)) t2++;
	printf("%d", min(t1, t2));
	return 0;
}