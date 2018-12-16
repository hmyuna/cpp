#include <bits/stdc++.h>
using namespace std;
int n;
int s = 0, x, y, sum = 0;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> x >> y;
		s += x + y - 8;
		sum += s;
	}
	cout << sum << endl;
	return 0;
}
