#include <bits/stdc++.h>
using namespace std;
int a[5], sum = 0;
string t;
int main(){
	cin >> a[1] >> a[2] >> a[3] >> a[4];
	cin >> t;
	for(int i = 0; i < t.length(); i++){
		sum += a[t[i] - '0'];
	}
	cout << sum << endl;
	return 0;
}