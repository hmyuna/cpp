#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main(){
	scanf("%d/%d\n%d/%d", &a, &b, &c, &d);
	cout << b * d / __gcd(a *c, b * d) << " " << a * c / __gcd(a *c, b * d) << endl;
	return 0;
}
