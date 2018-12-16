#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	FILE* fout;
	char name[10];
	scanf("%s", &name);
	fout = fopen(name, "w");
	char x[1000];
	char v[1000];
	scanf("%s", &x);
	for(int i = 0; i < strlen(x); i++){
		if(x[i] == '$'){
		fprintf(fout, "%s", x);
		printf("在%s中的文件：\n%s\n", name, x);
		fclose(fout);
		break;		
		}
	}
	system("pause");
	return 0;
}
