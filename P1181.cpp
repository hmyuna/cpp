#include <bits/stdc++.h>
using namespace std;
int t, n, m, ans = 1, tmp = 0;
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> t;
		if(tmp + t > m){
			ans++;
			tmp = t;
		}else{
			tmp += t;
		}
	}
	cout << ans << endl;
	return 0;
}
