#include <bits/stdc++.h>
using namespace std;
char x[101], z[101], n;
int main(){
	scanf("%d\n", &n);
	cin >> x;
	cin >> z;
	for(int i = 0; i < n; i++){
		if(x[i] < z[i]) {
			cout << -1 <<endl;
			return 0;
		}
	}
	cout << z << endl;
	return 0;
}
