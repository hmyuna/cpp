#include <bits/stdc++.h>
using namespace std;
double f[101][3];
int n, a;
int main(){
	cin >> n;
	f[1][1] = 100;
	cin >> a;
	f[1][2] = 1.0 * a;
	for(int i = 2; i <= n; i++){
		cin >> a;
		f[i][1] = max(f[i - 1][1], f[i - 1][2] / (double)a * 100.0);
		f[i][2] = max(f[i - 1][2], f[i - 1][1] / 100.0 * a);
	}
	printf("%.2lf\n", f[n][1]);
	return 0;
}