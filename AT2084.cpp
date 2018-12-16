#include <bits/stdc++.h>
using namespace std;
string a;
int main(){
	cin >> a;
	if(a.find('F', a.find('C')) == string::npos){
		cout << "No" << endl;
	}else {
		cout << "Yes" << endl;
	}
	return 0;
}