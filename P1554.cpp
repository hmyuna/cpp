#include <bits/stdc++.h>
using namespace std;
int n, m;
int ans[11];
int main(){
	memset(ans, 0, sizeof(ans));
	cin >> m >> n;
	for(int i = m; i <= n; i++){
		int t = i;
		while (t) {
			ans[t % 10]++;
			t /= 10;
		}
	}
	for(int i = 0; i <= 9; i++){
		cout << ans[i] << " ";
	}
	return 0;
}
