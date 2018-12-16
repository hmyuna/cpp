#include <bits/stdc++.h>
using namespace std;
int v, n;
long long f[10001] = {1}, a[31];
int main(){
	#ifdef LOCAL
	freopen("P1474.in", "r", stdin);
	#endif
	cin >> v >> n;
	for(int i = 1; i <= v; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= v; i++){
		for(int j = a[i]; j <= n; j++) f[j] += f[j - a[i]];
	}
	cout << f[n] << endl;
	return 0;
}