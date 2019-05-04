#include <bits/stdc++.h>
using namespace std;
int f[100001][40], a, x, lc, n, m, p, len, l, r;
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		f[i][0] = a;
	}
	lc = (int)(log(n) / log(2));
	for (int j = 1; j <= lc; j++)
		for (int i = 1; i <= n - (1 << j) + 1; i++)
			f[i][j] = max(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d%d", &l, &r);
		p = (int)(log(r - l + 1) / log(2));
		printf("%d\n", max(f[l][p], f[r - (1 << p) + 1][p]));
	}
	return 0;
}