#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main(){
	cin >> a >> b >> c;
	for(int i = 1; i <= a; i++){
		printf("(%d,%d)", b, i);
	}
	cout << endl;
	for(int i = 1; i <= a; i++){
		printf("(%d,%d)", i, c);
	}
	cout << endl;
	for(int i = 1; i <= a - abs(b - c); i++){
		printf("(%d,%d)", i, i + abs(b - c));
	}
	cout << endl;
	for(int i = a; i <= a && b + c - i <= a; i--){
		printf("(%d,%d)", i, b + c - i);
	}
	cout << endl;
	return 0;
}
