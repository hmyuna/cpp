#include <bits/stdc++.h>
using namespace std;
int g[101][101], m, n, ans = 0;
int fxx[9]={0,-1,-1,-1,0,0,1,1,1};
int fxy[9]={0,-1,0,1,-1,1,-1,0,1};
char t;
void dfs(int i, int j){
	if(i < 1 || i > n || j > m || j < 1 || g[i][j] == 0) return;
	g[i][j] = 0;
	dfs(i - 1, j);
	dfs(i, j - 1);
	dfs(i, j + 1);
	dfs(i + 1, j);
	dfs(i + 1, j + 1);
	dfs(i - 1, j - 1);
	dfs(i - 1, j + 1);
	dfs(i + 1, j - 1);
}
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> t;
			if(t == '.') g[i][j] = 0;
			else g[i][j] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(g[i][j] != 0)
			{
				ans++;
				dfs(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
