#include <bits/stdc++.h>
using namespace std;
int a[201][201];
int n, m;
int maxx(int a, int b, int c){
	return max(max(a, b), c);
}
int main(){
	#ifdef LOCAL
	freopen("P1508.in", "r", stdin);
	#endif
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			a[i][j] += maxx(a[i - 1][j - 1], a[i - 1][j], a[i - 1][j + 1]);
		}
	}
	cout << maxx(a[n][m / 2], a[n][m / 2 + 1], a[n][m / 2 + 2]) << endl;
	return 0;
}