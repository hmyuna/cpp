#include <bits/stdc++.h>
using namespace std;
int n, k, ans = 0, t;
int main(){
	cin >> n >> k;
	ans = n;
	while(n){
		t += n;
		n = t / k;
		t %= k;
		ans += n;
	}
	cout << ans <<endl;
	return 0;
}
