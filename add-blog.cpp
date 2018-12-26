#include <bits/stdc++.h>
using namespace std;
string a;
int main(){
	cin >> a;
	a = "./blog/add_blog.exe " + a;
	cout << a << endl;
	system(a.c_str());
	return 0;
}