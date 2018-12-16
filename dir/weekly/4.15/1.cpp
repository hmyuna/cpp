#include <bits/stdc++.h>
using namespace std;
int a, b;
int main(){
	cin >> a >> b;
	printf("%6d\n* %4d\n", a, b);
	printf("-----------\n");
	printf("%6d\n", (a * (b % 10)));
	printf("%5d\n", (a * (b / 10)));
	cout << "-----------" << endl;
	printf("%5d\n", a * b);
	return 0;
}
