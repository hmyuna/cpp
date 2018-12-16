#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, e, f, m;
int main(){
	scanf("%d:%d:%d\n%d:%d:%d\n%d", &a, &b, &c, &d, &e, &f, &m);
	cout << ((d - a) * 3600 + (e - b) * 60 +(f - c)) * m;
	return 0;
}
