#include <bits/stdc++.h>
using namespace std;
int a[4];
int main(){
	cin >> a[1] >> a[2] >> a[3];
	sort(a, a + 4);
	cout << a[1] / __gcd(a[1], a[3]) << "/" << a[3] / __gcd(a[1], a[3]);
	return 0;
}
