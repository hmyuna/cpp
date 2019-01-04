#include <bits/stdc++.h>
using namespace std;
int f[105][105];
int a[105][105];
int Max(int a, int b){
	if(a > b)
		return a;
	return b;
}
int n, m, ans;
int dp(int x, int y)
{
	if (f[x][y])
		return f[x][y];
	int ans = 0;
	if (x - 1 > 0)
		if (a[x - 1][y] > a[x][y])
			ans = Max(ans, dp(x - 1, y));
	if (x + 1 > 0)
		if (a[x + 1][y] > a[x][y])
			ans = Max(ans, dp(x + 1, y));
	if (y - 1 > 0)
		if (a[x][y - 1] > a[x][y])
			ans = Max(ans, dp(x, y - 1));
	if (y + 1 > 0)
		if (a[x][y + 1] > a[x][y])
			ans = Max(ans, dp(x, y + 1));
	f[x][y] = ans + 1;
	return f[x][y];
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			if (f[i][j] == 0)
				f[i][j] = dp(i, j);
			ans = Max(ans, f[i][j]);
		}
	printf("%d\n", ans);
	return 0;
}