#include <bits/stdc++.h>
using namespace std;
int n;
bool P(int a){
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return 0;
	}
	return 1;
}
int main(){
	cin >> n;
	for(int i = 4; i <= n; i += 2){
		for(int j = 2; j <= i / 2; j++){
			if(P(j) && P(i - j)){
				printf("%d=%d+%d\n", i, j, i - j);
				break;
			}
		}
	}
	return 0;
}
