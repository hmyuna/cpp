//system.cpp
#include <stdio.h>
#include "string.h"
#include <stdlib.h>
using namespace std;
int main(){
	printf("Microsoft Windows [版本 6.1.7601]\n版权所有 (c) 2009 Microsoft Corporation。保留所有权利。\n\n");
	string scmd;
	while(1){
		printf("C:\\");
		scmd = scanstring();
		system(scmd.v);
	}
	return 0;
}
