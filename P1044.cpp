#include <bits/stdc++.h>
using namespace std;
int n, f[10001];
int main(){
	cin >> n;
	f[0] = 1, f[1] = 1;
	for(int x = 2; x <= n; x++){
		for(int i = 0; i <= x - 1; i++){
			f[i] += f[j] * f[i - j - 1];
		}
	}
	cout << f[n] << endl;
	return 0;
}
