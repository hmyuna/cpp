#include <bits/stdc++.h>
using namespace std;
string a, b;
void dfs(string a, string b){
	if(a.size() <= 0) return;
	cout << b[b.length() - 1];
	int k = a.find(b[b.length() - 1]);
	dfs(a.substr(0, k), b.substr(0, k));
	dfs(a.substr(k + 1), b.substr(k, a.length() - k - 1));
}
int main(){
	cin >> a >> b;
	dfs(a, b);
	cout << endl;
	return 0;
}
