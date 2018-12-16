#include <stdio.h>
#include <iostream>
using namespace std;
int isprime(int a){
	if(a == 1){
		return 0;
	}
	for(int i = 2; i <= (a / 2); i++){
		if(a % i == 0){
			cout << "i = " << i << "\n";
			return 0;
		}
	}
	return 1;
}

int main(){
	int a;
	int b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if(isprime(a)){
		printf("a Yes");
	}else{
		printf("a No");
	}
	printf("\n");
	if(isprime(b)){
		printf("b Yes");
	}else{
		printf("b No");
	}
	system("PAUSE");
	return 0;
}
