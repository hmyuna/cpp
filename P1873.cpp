#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[1000001];
long long m, l = 0, r;
bool check(long long x){
	long long ans = 0;
	for (long long i = 1; i <= n; i++){
		ans += max(a[i] - x, (long long)0);
	}
	return ans >= m;
}
int main()
{
	cin >> n >> m;
	for(long long i = 1; i <= n; i++){
		cin >> a[i];
		r = max(r, a[i]);
	}
	while(l + 3 <= r){
		long long mid = (l + r) / 2;
		if(check(mid) == 1)
			l = mid;
		else
			r = mid;
	}
	for(long long i = r; i >= l; i--){
		if(check(i) == 1){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}