#include <bits/stdc++.h>
using namespace std;
int V, M, n, v[51], m[51], k[51], f[501][501];
int main(){
	cin >> V >> M;
	cin >>n;
	for(int i = 1; i <= n; i++){
		scanf("%d %d %d", &v[i], &m[i], &k[i]);
	}
	for(int i = 1; i <= n; i++){
		for(int j = V; j >= v[i]; j--){
			for(int t = M; t >= m[i]; t--){
				f[j][t] = max(f[j][t], f[j - v[i]][t - m[i]] + k[i]);
			}
		}
	}
	cout << f[V][M] <<endl;
	return 0;
}
