#include <bits/stdc++.h>
using namespace std;
int n, m, _, __, ___, d, g[101][101];
int head[101], nxt[10010], value[10010], ed[10010], cnt = 0, inque[101], s, t, dis[101];
queue <int> q;
void addedge(int a, int b, int c){
	cnt++;
	value[cnt] = c;
	ed[cnt] = b;
	nxt[cnt] = head[a];
	head[a] = cnt;
}
int main(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		cin >> _ >> __ >> ___;
		addedge(_, __, ___);
		addedge(__, _, ___);
	}
	cin >> d;
	for(int i = 1; i <= d; i++){
		cin >> _ >> __;
		g[_][__] = 1;
		g[__][_] = 1;
	}
	cin >> s >> t;
	memset(dis, 127, sizeof(dis));
	memset(inque, 0, sizeof(inque));
	dis[s] = 0;
	inque[s] = 1;
	q.push(s);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		inque[u] = 0;
		for(int p = head[u]; p != 0; p = nxt[p]){
			int v = ed[p];
			if(g[u][v] == 0) value[p] = 0;
			if(dis[v] > dis[u] + value[p]){
				dis[v] = dis[u] + value[p];
				if(!inque[v]){
					inque[v] = 1;
					q.push(v);
				}
			}
		}
	}
	cout << dis[t] << endl;
	return 0;
}
