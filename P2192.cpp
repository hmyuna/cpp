#include <bits/stdc++.h>
using namespace std;
int n, f = 0, z = 0, t;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> t;
		if(t == 5) f++;
		else z++;
	}
	if(z == 0){
		cout << -1 << endl;
		return 0;
	}
	if(f < 9){
		cout << 0 << endl;
		return 0;
	}else{
		f -= f % 9;
	}
	for(int i = 1; i <= f; i++){
		cout << 5;
	}
	for(int i = 1; i <= z; i++){
		cout << 0;
	}
	cout << endl;
	return 0;
}
