#include <bits/stdc++.h>
using namespace std;
int n, f[100001], a[200001], ans = -10001;
int main(){
	cin >> n;
	for(int _ = 1; _ <= n; _++){
		scanf("%d", &a[_]);
	}
	f[0] = -10001;
	for(int i = 1; i <= n; i++){
		f[i] = max(f[i - 1] + a[i], a[i]);
		if(ans < f[i]) ans = f[i];
	}
	cout << ans << endl;
	
	return 0;
}