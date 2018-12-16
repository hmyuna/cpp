//copy.cpp
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <process.h>
using namespace std;
int main(){
	char a[80], b[80];
	char cmd[170] = {"copy "};
	printf("复制文件(夹)");
	cin >> a;
	printf("复制文件(夹)至");
	cin >> b;
	strncat(cmd, a, 100);
	strncat(cmd, " ", 100);
	strncat(cmd, b, 100);
	system(cmd);
	system("PAUSE");
	return 0;
}
