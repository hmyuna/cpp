#include <bits/stdc++.h>
using namespace std;
int m, s, t, f[300001];
int main(){
	cin >> m >> s >> t;
	for(int i = 1; i <= t; i++){
		if(m >= 10) {
			m -= 10;
			f[i] = f[i - 1] + 60;
		}else{
			f[i] = f[i - 1];
			m += 4;
		}
	}
	for(int i = 1; i <= t; i++){
		f[i] = max(f[i - 1] + 17, f[i]);
		if(f[i] >= s){
			cout << "Yes" << endl;
			cout << i << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	cout << f[t] << endl;
	return 0;
}

