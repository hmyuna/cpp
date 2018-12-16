#include <bits/stdc++.h>
using namespace std;
int n, k, ans = 0;
int a[2201];
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= k; i++){
		ans += a[i];
	}
	cout << ans << endl;
	return 0;
}