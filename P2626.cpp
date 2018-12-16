#include <bits/stdc++.h>
using namespace std;
long long f[49], n;
bool flag = 1;
int main(){
	#ifdef LOCAL
	freopen("P2626.in", "r", stdin);
	#endif
	cin >> n;
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i <= n; i++){
		f[i] = (f[i - 1] + f[i - 2]) % (1 << 31);
	}
	cout << f[n] << "=";
	for(int i = 2; i <= f[n]; i++){
		while(1){
			if(f[n] % i != 0) break;
			if(flag == 1) {
				cout << i;
				flag = 0;
			}
			else cout << "*" << i;
			f[n] /= i;
		}
	}
	cout << endl;
	return 0;
}