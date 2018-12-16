#include <bits/stdc++.h>
using namespace std;
int f[1001][1001];
int n;
int a[1001], b[1001];
int m, t;
int ans = -1;
int main(){
	cin >> n >> m >> t;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = m; j >= b[i]; j--){
			for(int k = t; k >= a[i]; k--){ 
				if(f[j][k] == 0 || f[j][k] < f[j - b[i]][k - a[i]] + 1) f[j][k] = f[j - b[i]][k - a[i]] + 1, ans = max(ans, f[j][k]);
			}
		}
	}
	cout << ans << endl;
	return 0;
}