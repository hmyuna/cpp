#include <bits/stdc++.h>
using namespace std;
int n, m, k, r;
int a[10001], b[10001], t[10001], f[10001];
int main(){
	memset(f, -1, sizeof(f));
	f[0] = 0;
	cin >> n >> m >> k >> r;
	for(int i = 1; i <= n; i++) cin >> t[i];
	sort(t + 1, t + 1 + n);
	for(int i = 1; i <= m; i++) cin >> a[i];
	for(int i = 1; i <= m; i++) cin >> b[i];
	for(int i = 1; i <= m; i++){
		for(int j = 10001; j >= 0; j--){
			if(f[j] != -1){
				if(f[j + b[i]] == -1 || f[j + b[i]] > f[j] + a[i]) f[j + b[i]] = f[j] + a[i];
			}
		}
	}
	int ans = 10000001;
	for(int i = k; i <= 10001; i++){
		if(f[i] > 0) ans = min(ans, f[i]);
	}
	int times = r - ans;
	for(int i = 1; i <= n; i++){
		if(times < t[i]){
			cout << i - 1 << endl;
			return 0;
		}
		else times -= t[i];
	}
	return 0;
}