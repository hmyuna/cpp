#include <bits/stdc++.h>
using namespace std;
struct Point
{
	int x, y, step;
};
int n, m;
int sx, sy;
queue <Point> q;
bool used[401][401];
int ans[401][401];
int dx[11] = {0, 2, -2, 2, -2, -1, 1, -1, 1};
int dy[11] = {0, 1, 1, -1, -1, 2, 2, -2, -2};
int bfs(int sx, int sy){
	memset(used, 0, sizeof(used));
	used[sx][sy] = 1;
	memset(ans, -1, sizeof(ans));
	Point starter;
	starter.x = sx;
	starter.y = sy;
	starter.step = 0;
	q.push(starter);
	while(!q.empty()){
		Point u = q.front();
		q.pop();
		if(ans[u.x][u.y] == -1 || ans[u.x][u.y] > u.step) ans[u.x][u.y] = u.step;
		for(int i = 1; i <= 8; i++){
			Point v;
			v.step = u.step + 1;
			v.x = u.x + dx[i];
			v.y = u.y + dy[i];
			if(v.x < 1 || v.x > n || v.y < 1 || v.y > m || used[v.x][v.y]) continue;
			q.push(v);
			used[v.x][v.y] = 1;
		}
	}
	return -1;
}
int main(){
	#ifdef LOCAL
	freopen("P1443.in", "r", stdin);
	#endif
	cin >> n >> m >> sx >> sy;
	bfs(sx, sy);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("%-5d", ans[i][j]);
		}
		cout << endl;
	}
	return 0;
}