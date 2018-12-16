#include <bits/stdc++.h>
using namespace std;
int n, t;
int last, tmp, ans;
int main(){
	cin >> n >> t;
	cin >> last;
	for(int i = 2; i <= n; i++){
		cin >> tmp;
		if(tmp - last <= t) ans += tmp - last;
		else ans += t;
		last = tmp;
	}
	cout << ans + t << endl;
	return 0;
}
