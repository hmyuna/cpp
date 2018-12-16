#include <bits/stdc++.h>
using namespace std;
string t;
int ans = 0;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("U51941.in", "r", stdin);
	#endif
	while(cin >> t) ans += t.length();
	cout << ans << endl;
	return 0;
}