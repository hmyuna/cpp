#include <bits/stdc++.h>
using namespace std;
int head[101], nxt[2001], ed[2001], cnt = 0;
int n, x[101], y[101];
double dis[101], value[2001];
int inque[101], X, Y, s, t, m;
queue <int> q;
void addedge(int a, int b, double c){
	cnt++;
	value[cnt] = c;
	ed[cnt] = b;
	nxt[cnt] = head[a];
	head[a] = cnt;
}
double Dis(int xx, int yy)
{
    return sqrt((double)(x[xx] - x[yy]) * (x[xx] - x[yy]) + (y[xx] - y[yy]) * (y[xx] - y[yy]));
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> X >> Y;
		addedge(X, Y, Dis(X, Y));
		addedge(Y, X, Dis(X, Y));
	}
	cin >> s >> t;
	for(int i = 0; i <= n; i++){
		dis[i] = -1;
		inque[i] = 0;
	}
	dis[s] = 0;
	inque[s] = 1;
	q.push(s);
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		inque[u] = 0;
		for(int p = head[u]; p != 0; p = nxt[p]){
			int v = ed[p];
			if(dis[v] > dis[u] + value[p] || dis[v] == -1){
				dis[v] = dis[u] + value[p];
				if(inque[v] == 0){
					q.push(v);
					inque[v] = 1;
				}
			}
		}
	}
	printf("%.2f\n", dis[t]);
	return 0;
}
