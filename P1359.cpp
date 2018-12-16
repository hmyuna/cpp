#include <bits/stdc++.h>
using namespace std;
int f[201],n, x;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			cin >> x;
			if(f[j] == 0 || f[j] > f[i] + x) f[j] = f[i] + x;
		}
	}
	cout << f[n] << endl;
}
