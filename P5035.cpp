#include <bits/stdc++.h>
using namespace std;
long long k;
int main(){
	cin >> k;
	long long b = 2, p = k - 1, result = 1;
	while (p != 0)
	{
		if (p % 2 == 1)
		{
			result = result * b % 123456789;
		}
		p /= 2;
		b = b * b % 123456789;
	}
	cout << result << endl;
	return 0;
}