#include <bits/stdc++.h>
using namespace std;
int ans, n, m, dp[2010][2010], t[2010][2010];
int main(){
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &t[j][i]);
		}
	}
	for(int i = 1; i <n; i++){
		dp[i][1] = min(dp[i - 1][1], dp[i - 1][m]) + t[i][1];
		for(int j = 2; j <= m; j++){
			dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + t[i][j];
		}
	}
	ans = min(dp[n - 1][1], dp[n - 1][m]) + t[n][1];
	for(int j = 2; j <= m; j++){
		ans = min(ans, (min(dp[n - 1][j], dp[n - 1][j - 1]) + t[n][j]));
	}
	cout << ans;
	return 0;
}