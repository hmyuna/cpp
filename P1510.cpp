#include <bits/stdc++.h>
using namespace std;
int f[10001];
int v, n, c;
int k[10001], m[10001];
int ans = -1;
int main() {
	cin >> v >> n >> c;
	for(int i = 1; i <= n; i++){
		cin >> k[i] >> m[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = c; j >= m[i]; j--){
			f[j] = max(f[j], f[j - m[i]] + k[i]);
			if(f[j] >= v)ans = max(ans, c - j);
		}
	}
	if(ans==-1)
		cout << "Impossible";
	else
		cout << ans;
	return 0;
}