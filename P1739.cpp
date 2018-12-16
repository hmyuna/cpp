#include <bits/stdc++.h>
using namespace std;
char t;
stack <char> s;
int main(){
	while(cin >> t){
		if(t == '@') break;
		if(t == '(') s.push('(');
		if(t == ')') {
			if(s.empty()) {
				cout << "NO" << endl;
				return 0;
			}
			s.pop();
		}
	}
	if(s.empty()) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
