#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 0, i, j;
    char b[5][5];
    for(i = 1;i <= 3;i++)
	    for(j = 1;j <= 3;j++){
	        cin >> b[i][j];
	        if(b[i][j]!='-')
	        a++;
	    }
    if((b[1][2] == 'X' && b[3][2] != 'O') || (b[3][2] == 'X' && b[1][2] != 'O')||(b[2][1] == 'X' && b[2][3] != 'O') || (b[2][3] == 'X' && b[2][1] != 'O'))
    	cout << "xiaoa will win.";
    else cout << "Dont know.";
    cout << '\n' << a;
    return 0;
}
