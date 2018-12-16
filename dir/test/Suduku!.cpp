#include <bits/stdc++.h>//suduku!
using namespace std;
int num[10][10];
bool flag = 0;
void Input ()
{
	char c;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%c", &c);
			num[i][j] = c - '0';
		}
	}
}
bool Check(int u, int k){
	int l = u / 9;
	int c = u % 9;
	for (int i = 0; i < 9; i++)
	{
		if (num[l][i] == k) 
		{
			return 0;
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (num[i][c] == k) 
		{
			return 0;
		}
	}
	int x = l / 3 * 3;
	int y = c / 3 * 3;
	for (int i = x; i < x + 3; i++)
	{
		for (int j = y; j < y + 3; j++)
		{
			if (num[i][j] == k) 
			{
				return 0;
			}
		}
	}
	return 1;
}
void Output(){
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << num[i][j] << " ";
			if (j % 3 == 2) 
			{
				cout << '\t';
			}
		}
		cout << endl;
		if (i % 3 == 2) 
		{
			cout << endl;
		}
	}
}
void dfs(int u){
	if (u > 80) 
	{
		flag = 1;
		return ;
	}
	if (num[u / 9][u % 9] != 0) 
	{
		dfs(u + 1);
	}
	for (int i = 1; i <= 9; i++)
	{
		if (Check(u, i)) 
		{
			num[u / 9][u % 9] = i;
			dfs(u + 1);
			if(flag) return ;
			num[u / 9][u % 9] = 0;
		}
	}
	return ;
}
int main(int argc, char** argv){
    Input();
    dfs(0);
    return 0;
}