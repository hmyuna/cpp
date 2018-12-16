#include <bits/stdc++.h>
#define MAXN 0x3f3f3f3f
using namespace std;
int head[5001], nxt[50001], ed[50001], value[50001], cnt = 0;
int dis[5001], inque[5001];
queue <int> q;
int n, l, r, s, L = MAXN, R = -MAXN;
void addedge(int a, int b, int c){
	cnt++;
	value[cnt] = c;
	ed[cnt] = b;
	nxt[cnt] = head[a];
	head[a] = cnt;
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> l >> r >> s;
		r++;
		L = min(l, L);
		R = max(R, r);
		addedge(l, r, s);
	}
	memset(dis, -1, sizeof(dis));
	memset(inque, 0, sizeof(inque));
	dis[L] = 0, inque[L] = 1;
	q.push(L);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		inque[u] = 0;
		for(int p = head[u]; p != 0; p = nxt[p]){
			int v = ed[p];
			if(dis[v] == -1 || dis[v] > value[p] + dis[u]){
				dis[v] = value[p] + dis[u];
				if(!inque[v]){
					q.push(v);
					inque[v] = 1;
				}
			}
		}
	}
	cout << dis[R] << endl;
	return 0;
}
