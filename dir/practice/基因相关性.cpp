#include <bits/stdc++.h>
using namespace std;
string a, b;
int l, sum = 0, t;
int main(){
	cin >> t >> a >> b;
	l = a.length();
	for(int i = 0; i < l; i++){
		if(a[i] == b[i]) sum++;
	}
	if(sum >= t) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}
