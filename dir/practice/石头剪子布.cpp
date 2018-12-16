#include <bits/stdc++.h>
using namespace std;
char a, b;
string t1, t2;
int t;
int main(){
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> t1 >> t2;
		a = t1[0], b = t2[0];
		cout << a << endl << b << endl;
		if(a == b) {
			cout << "Tie" << endl;
			continue;
		}
		if(a == 'R'){
			if (b == 'S') t = 1;
			else t = 2;
		}
		if(a == 'S'){
			if(b == 'R') t = 2;
			else t = 1;
		}
		if(a == 'P'){
			if(b == 'S') t = 2;
			else t = 1;
		}
		cout << "Player" << " " << t << endl;
	}
	return 0;
}
