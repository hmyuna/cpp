#include <bits/stdc++.h>
using namespace std;
int n, m, f[501][101][501], t[501], dt[501];
bool cmp(int a, int b){
	return a < b;
}
int main(){
	freopen("P5017.in", "r", stdin);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> t[i];
	}
	sort(t + 1,t + 1 + n, cmp);
	for(int i = 2; i <= n; i++){
		dt[i - 1] = t[i] - t[i - 1];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j<= m; j++){
			f[n][j][i] = j * i;//default
		}
	}
	for(int i = n - 1; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			for(int k = 0; k <= min(dt[i], m); k++){
				f[i][k][j] = min(f[i + 1][0][j + 1] + dt[i] * j, f[i + 1][max(0,m - dt[i] + k)][1] + k * j);//再回去
			}
			for(int k = min(dt[i] + 1,m + 1); k <= m; k++){
				f[i][k][j] = f[i + 1][k - dt[i]][j + 1] + dt[i] * j;//不回去
			}
		}
	}
	printf("%d\n", f[1][0][1]);
	return 0;
}