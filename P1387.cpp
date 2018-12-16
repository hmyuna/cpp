#include <bits/stdc++.h>
using namespace std;
int n, m, f[101][101], ans = -1;
int main(){
	#ifdef LOCAL
	freopen("P1387.in", "r", stdin);
	#endif
	memset(f, 0, sizeof(f));
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			int t;
			cin >> t;
			if(t == 1) f[i][j] = min(min(f[i - 1][j - 1], f[i][j - 1]), f[i - 1][j]) + 1;
			ans = max(ans, f[i][j]);
		}
	}
	cout << ans << endl;
	return 0;
}