#include <bits/stdc++.h>
using namespace std;
int n;
string c;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> c;
		if((c[c.length() - 1] - '0') % 2 == 0) cout << "even" << endl;
		else cout << "odd" << endl;
	}
	return 0;
}
