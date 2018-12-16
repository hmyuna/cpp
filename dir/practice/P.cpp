#include <bits/stdc++.h>
using namespace std;
string a;
int cnt = 0;
char l;
int main(){
	cin >> a;
	l = a[0];
	cout << l;
	for(int i = 1; i <= a.length() - 1; i++){
		if(a[i] != l){
			cout << cnt + 1;
			cnt = 0, l = a[i];
			cout << a[i];
		}else{
			cnt++;
		}
	}
	cout << cnt + 1 << endl;
	return 0;
}
