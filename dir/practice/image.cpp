#include <iostream>
#include <cstring>
#define len 100
using namespace std;
int main(){
	int col, row, num = 0, i, j;
	float a = 100;
	int image1[len][len];
	int image2[len][len];
	cin>> col >> row;
	for(i = 0;i < col; i++){
		for(j = 0;j < row; j++){
			cin >> image1[i][j];
		}
	}
	cout << "----------------------------------------------------" << "\n";
	for(i = 0;i < col; i++){
		for(j = 0;j < row; j++){
			cin >> image2[i][j];
		}
	}
	for(i = 0;i < col; i++){
		for(j = 0;j < row; j++){
			if(image1[i][j] == image2[i][j]){
				num++;
			}
		}
	}
	a = (float)(num / col);
	cout << (a / row) * 100 << "%";
	return 0;
}
