#include <bits/stdc++.h>
using namespace std;
int score[11][11] = {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
int n, na, nb;
int scorea = 0, scoreb = 0;
int a[201], b[201];
int main(){
	#ifdef LOCAL
	freopen("P1328.in", "r", stdin);
	#endif
	cin >> n >> na >> nb;
	for (int i = 0; i < na; ++i)
	{
		cin >> a[i];
	}
	for(int i = 0; i < nb; i++){
		cin >> b[i];
	}
	for(int i = 0; i < n; i++){
		scorea += score[a[i % na]][b[i % nb]];
		scoreb += score[b[i % nb]][a[i % na]];
	}
	cout << scorea << " " << scoreb << endl;
	return 0;
}