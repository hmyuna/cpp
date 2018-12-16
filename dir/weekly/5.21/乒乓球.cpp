#include <bits/stdc++.h>
using namespace std;
char t[250001], _______;
int len = 0, a_11 = 0, b_11 = 0, a_21 = 0, b_21 = 0;
int main(){
	while(cin >> _______ && _______ != 'E'){
		t[++len] = _______;
	}
	for(int i = 1; i <= len; i++){
		if(t[i] == 'W') a_11++;
		else b_11++;
		if((a_11 >= 11 || b_11 >= 11) && abs(a_11 - b_11) >= 2) {
			cout << a_11 << ":" << b_11 << endl;
			a_11 = b_11 = 0;
		}
	}
	cout << a_11 << ":" << b_11 << endl << endl;
	for(int i = 1; i <= len; i++){
		if(t[i] == 'W') a_21++;
		else b_21++;
		if((a_21 >= 21 || b_21 >= 21) && abs(a_21 - b_21) >= 2) {
			cout << a_21 << ":" << b_21 << endl;
			a_21 = b_21 = 0;
		}
	}
	cout << a_21 << ":" << b_21 << endl;
	return 0;
}
