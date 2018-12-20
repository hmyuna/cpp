#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000001], l = 0, r;
bool check(int x){
	int ans = 0;
	for (int i = 1; i <= n; i++){
		ans += max(a[i] - x, 0);
	}
	return ans >= m;
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		r = max(r, a[i]);
	}
	while(l + 3 <= r){
		int mid = (l + r) / 2;
		if(check(mid) == 1)
			l = mid;
		else
			r = mid;
	}
	for(int i = r; i >= l; i--){
		if(check(i) == 1){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}