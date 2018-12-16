#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int ans;
int main(){
	cin >> n >> s;
	for(int i = 0; i <= n - 2; i++){
		if(s[i] == 'V' && s[i + 1] == 'K'){
			s[i] = 'v', s[i + 1] = 'k';
			ans++;
		}
	}
	for(int i = 0; i <= n - 2; i++){
		if(s[i] == s[i + 1]){
			cout << ans + 1 << endl;
			return 0;
		}
	}
	cout << ans << endl;
	return 0;
}
