#include <bits/stdc++.h>
using namespace std;
char x[1010];
int a[1010], la;
int b[1010], lb;
int c[2020], lc;
int main (){
	scanf("%s", x);
	la = strlen(x);
	for(int i = 0; i < la / 2; i++){
		swap(x[i], x[la - 1 - i]); 
	}
	for(int i = 0; i < la; i++){
		a[i + 1] = x[i] - '0'; 
	}
	
	scanf("%s", x);
	lb = strlen(x);
	for(int i = 0; i < lb / 2; i++){
		swap(x[i], x[lb - 1 - i]);
	}
	for(int i = 0; i < lb; i++){
		b[i + 1] = x[i] - '0'; 
	}
	lc = la + lb - 1;
	for(int i = 1; i <= la ; i++){
		for(int j = 1; j <= lb; j++){
			c[i + j - 1] += a[i] * b[j];
			c[i + j] += a[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
	}
	while(c[lc + 1] > 0){
		lc++;
		c[lc + 1] += c[lc] / 10;
		c[lc] %= 10;
	}
	for (int i = lc; i >= 1; i--)
		printf("%d", c[i]);
	cout << endl; 
	return 0;
}


