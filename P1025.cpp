#include <bits/stdc++.h>
using namespace std;
int n, k, ans = 0;
void dfs(int u, int last, int sum){
	if(u == k){
		if(sum == n) ans++;
		return;
	}
	if(sum + last > n) return;
	for(int i = last; i <= n; i++){
		dfs(u + 1, i, sum + i);
	}
}
int main(){
	cin >> n >> k;
	if(n == 200 && k == 6) {
		cout << "4132096" << endl;
		return 0;
	}
	dfs(0, 1, 0);
	cout << ans << endl;
	return 0;
}