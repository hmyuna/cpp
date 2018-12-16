
#include <bits/stdc++.h>
using namespace std;
int a[30001], l, r;
int w, n, ans;
int main(){
	#ifdef LOCAL
	freopen("P1094.in", "r", stdin);
	#endif
	cin >> w >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	l = 1, r = n;
	while(l <= r){
		if(a[l] + a[r] <= w){
			l++;
			r--;
			ans++;
		}else{
			r--,ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
/*
12
8
52
74
54
 */