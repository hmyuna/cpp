#include <bits/stdc++.h>
int f[101][101];
int main()
{
	int n, m, t;
	scanf("%d%d", &n, &m);
	memset(f, 0, sizeof(f));
	for (int i = 0; i <= n; i++)
		f[i][0] = 1;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		for (int j = 0; j <= t; j++)
			for (int k = 0; k <= m - j; k++)
			{
				if (j == 0 && k == 0)
					continue;
				f[i][j + k] += f[i - 1][k];
				f[i][j + k] %= 1000007;
			}
	}
	printf("%d\n", f[n][m] % 1000007);
	return 0;
}