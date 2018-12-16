#include <bits/stdc++.h>
using namespace std;
int ans[4];
char a, b;
int main(){
	while (scanf("%c:=%c;", &a, &b) == 2) {
		if(b >= '0' && b <= '9') ans[a - 'a'] = b - '0';
		else ans[a - 'a'] = ans[b - 'a'];
	}
	cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
	return 0;
}
