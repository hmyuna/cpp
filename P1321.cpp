#include <bits/stdc++.h>
using namespace std;
string a;
int g, b;
int main(){
	cin >> a;
	for(int i = 0; i <= a.length() - 2; i++){
		if(a[i] == 'b' || a[i + 1] == 'o' || a[i + 2] == 'y') b++;
		if(a[i] == 'g' || a[i + 1] == 'i' || a[i + 2] == 'r' || a[i + 3] == 'l') g++;
	}
	cout << b << "\n" << g << endl;
	return 0;
}
