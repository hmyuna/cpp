#include <bits/stdc++.h>
using namespace std;
string a;
char b[10001];
char Fan(char t){
	if(t > 'a')
		t = (t - 'a' + 3) % 26 + 'A';
	else
		t = (t - 'A' + 3) % 26 + 'a';
	return t;
}
int main(){
	cin >> a;
	for(int i = 0; i < a.length(); i++){
		b[a.length() - i - 1] = Fan(a[i]);
	}
	printf("%s\n", b);
	return 0;
}
