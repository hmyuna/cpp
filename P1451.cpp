#include <bits/stdc++.h>
using namespace std;
int g[101][101];
int m, n, ans = 0;
void dfs(int x, int y){
	if(x > m || x < 1 || y > n || y < 1 || g[x][y] == 0) return;
	g[x][y] = 0;
	dfs(x, y - 1);
	dfs(x, y + 1);
	dfs(x - 1, y);
	dfs(x + 1, y);
}
int main(){
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			scanf("%1d", &g[i][j]);
		}
	}
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(g[i][j] != 0) {
				ans++;
				dfs(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
