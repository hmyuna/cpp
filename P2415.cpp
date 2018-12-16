#include <bits/stdc++.h>
using namespace std;
long long sum = 0, n = 0, t;
int main(){
	while(cin >> t){
		sum += t;
		n++;
	}
	cout << (sum << (n - 1)) << endl;
	return 0;
}
