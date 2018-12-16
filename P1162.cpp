#include <bits/stdc++.h>
using namespace std;
struct point{
	int x, y;
};
int g[101][101];
int n;
int dx[] = {0, 0, 0, 1, -1};
int dy[] = {0, 1, -1, 0, 0};
queue <point>q;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> g[i][j];
		}
	}
	point asdasd;
	asdasd.x = 0;
	asdasd.y = 0;
	q.push(asdasd);
	g[0][0] = 2;
	while(!q.empty()){
		point u = q.front();
		q.pop();
		g[u.x][u.y] = 2;
		for(int i = 1; i <= 4; i++){
			point v = (point){u.x + dx[i], u.y + dy[i]};
			if(v.x < 0 || v.x > n + 1 || v.y < 0 || v.y > n + 1 || g[v.x][v.y] == 1 || g[v.x][v.y] == 2) continue;
			else q.push(v);
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << 2 - g[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
