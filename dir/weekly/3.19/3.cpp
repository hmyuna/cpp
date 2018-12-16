#include <bits/stdc++.h>
using namespace std;
bool solve(int x) {
	int a = 0, b = 0;
	while (x) {
		if(x % 2 == 0) a++;
		else if(x % 2 == 1) b++;
		x /= 2;
	}
	return b > a;
}
int ansA = 0, ansB = 0;
int main(int argc, char const *argv[]) {
	for(int i = 1; i <= 1000; i++){
		if(solve(i)) ansA++;
		else ansB++;
	}
	cout << ansA << " " << ansB << endl;
	return 0;
}
