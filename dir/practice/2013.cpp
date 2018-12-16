#include <bits/stdc++.h>
using namespace std;
int a[1001], p, n;
void swap1(int p){
	int i, j, b[1001];
	for (i = 1; i <= p; i++)
		b[n - p + i] = a[i]; 
	for (i = p + 1; i <= n; i++)
		b[i - p] = a[i]; 
	for (i = 1; i <= n; i++) 
		a[i] = b[i];
}
void swap2(int p){
	int i, j, temp;
	for (i = p + 1; i <= n; i++){
		temp = a[i];
		for (j = i; j >= i - p + 1; j--) 
			a[j] = a[j - 1];
		a[i - p] = temp; 
	}
}
int main(){
	cin >> n >> p;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	swap1(p);
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

