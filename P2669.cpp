#include <bits/stdc++.h>
using namespace std;
int ans = 0, k, i;
int main(){
	cin >> k;
	for(i = 1; k - i >= 0; k -= i++){
		ans += i * i;
	}
	ans += k * i;
	cout << ans << endl;
	return 0;
}
