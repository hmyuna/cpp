#include <bits/stdc++.h>
using namespace std;
string a;
int main(){
	cin >> a;
	a = a + a[0];
	for(int i = 0; i < a.length() - 1; i++){
		cout << (char)(a[i] + a[i + 1]);
	}
	return 0;
}
