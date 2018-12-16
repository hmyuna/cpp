#include <bits/stdc++.h>
using namespace std;
string a;
int cnt, f = 1, l = 0;
int main(){
	freopen("123.txt", "r", stdin);
	while(cin >> a){
		if(f){
			cout << a.length() << " ";
			f = 0;
		}
		for(int i = 0; i <= (int)a.length() - 1; i++){
			if(l != a[i] - '0') {
				cout << cnt << " ";
				cnt = 0;
				l = 1 - l;
			}
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
