#include <bits/stdc++.h>
using namespace std;
int offset, m, dayNum[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(){
	cin >> m;
	printf("S\tM\tT\tW\tT\tF\tS\n");
	offset = 4;
	for(int i = 1; i < m; i++){
		offset = (offset + dayNum[i]) % 7;
	}
	for(int i = 1; i <= offset; i++){
		cout << '\t';
	}
	for(int i = 1; i <= dayNum[m]; i++){
		cout << i << '\t';
		if((i + offset) % 7 == 0) cout << endl;
	}
	cout << endl;
	return 0;
} 
