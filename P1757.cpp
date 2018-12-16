#include <bits/stdc++.h>
using namespace std;
int f[1001], a[100001], b[10001], cc[10001], c[10001][10001], n, m, zu = 0;
int main(){
	cin >> m >> n;
	for(int i = 1; i <= n; i++){
		int _a, _b, _c;
		cin >> _a >> _b >> _c;
		a[i] = _a, b[i] = _b;
		cc[_c]++;
		c[_c][cc[_c]] = i;
		zu = max(zu, _c);
	}
	for(int i = 1; i <= zu; i++){
		for(int j = m; j >= 0; j--){
			for(int k = 1; k <= cc[i]; k++){
				if(j < a[c[i][k]]) continue;
				f[j] = max(f[j], f[j - a[c[i][k]]] + b[c[i][k]]);
			}
		}
	}
	cout << f[m] << endl;
	return 0;
}