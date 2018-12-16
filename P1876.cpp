#include <bits/stdc++.h>
using namespace std;
long long n;
int main(){
	cin >> n;
	for(int i = 1; i <= sqrt(n); i++){
		cout << i *i << " ";
	}
	return 0;
}
