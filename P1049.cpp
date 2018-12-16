#include <bits/stdc++.h>
using namespace std;
int V, n, v[10001], f[10001];
int main(){
	f[0] = 1;
	cin >> V >> n;
	for(int i = 1; i <= n; i++){
		scanf("%d", &v[i]);
	}
	for(int i = 1; i <= n; i++){
		for(int j = V; j >= 0; j--){
			if(f[j] == 1){
				if(j + v[i] > V) continue;
				f[j + v[i]] = 1;
			}
		}
	}
	for(int i = V; i >= 0; i--){
		if(f[i] == 1) {
			cout << V - i << endl;
			return 0;
		}
	}
	return 0;
}
