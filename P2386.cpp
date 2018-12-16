#include <bits/stdc++.h>
using namespace std;
int t, m, n;
int solve(int m, int n){//m : 苹果， n ： 盘子
	if(m == 0 || m == 1 || n == 1) return 1;//盘子只有一个或苹果没了或只有一个
	//只有一种方法
	if(m < n) return solve(m, m);//盘子太多了， 那最多只有m个盘子放东西， solve(m, m);
	else return solve(m - n, n) + solve(m, n - 1);//有一个盘子空出，或每一个盘子放一个的总和
}
int main(){
	cin >> t;
	for(int _ = 1; _ <= t; _++){
		scanf("%d %d", &m, &n);
		cout << solve(m, n) << endl;//输入， 输出
	}
	return 0;
}
