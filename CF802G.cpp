#include <bits/stdc++.h>
using namespace std;
string a;
int main(){
	cin >> a;

	if (a.find('i', a.find('d', a.find('i', a.find('e', a.find('h'))))) == string::npos) {
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
	return 0;
}