#include <bits/stdc++.h>
using namespace std;
int n, m, f[101][101];
int main(){
	#ifdef LOCAL
	freopen("P1057.in", "r", stdin);
	#endif
	cin >> n >> m;
	f[1][0] = 1;
	for(int i = 1; i <= m; i++){
		f[1][i] = f[2][i - 1] + f[n][i - 1];
		for(int j = 2; j < n; j++) f[j][i] = f[j - 1][i - 1] + f[j + 1][i - 1];
		f[n][i] = f[n - 1][i - 1] + f[1][i - 1];
	}
	cout << f[1][m] << endl;
	return 0;
}