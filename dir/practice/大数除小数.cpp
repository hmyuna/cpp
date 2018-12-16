#include <bits/stdc++.h>
using namespace std;
char x[10010];
int a[10010], la;
int b;
int c[10010], lc = 0;
int t = 0; 
int main (){
	scanf("%s", x);
	scanf("%d", &b);
	if(b == 0){
		printf("除数不能为零");
		return 0;
	}
	la = strlen(x);
	for(int i = 0; i < la; i++){
		a[i + 1] = x[i] - '0';
	}//读入数据
	
	 
	for(int i = 1; i <= la; i++){
		t = 10 * t + a[i];
		lc++;
		c[lc] = t / b;
		t %= b;
	}//t为小除数 模拟手算
	
	 
	int flag = 1;
	for(int i = 1; i <= lc; i++){
		if(flag){
			if(c[i] != 0){//去前导零 
				flag = 0;
				printf("%d", c[i]);
			}
		}else{
			printf("%d", c[i]);
		}
	}
	if(t) 
	printf("余%d", t);
	return 0;
} 

