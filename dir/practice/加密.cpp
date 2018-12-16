#include <stdio.h>
#include <stdlib.h>
char key[200];
int main(){
	char c;
	int len = 0;
	FILE* keyin;
	keyin = fopen("lib\\key.txt", "r");
	while(fscanf(keyin, "%c", &c) != -1){
		key[len++] = c;
	}
	char password[80];
	scanf("%s", &password);
	for(int i = 0;password[i] != '\0';i++){
		password[i] ^= key[i % (len - 1)];
		printf("%c", password[i]);
	}
	printf("\n");
	system("pause");
}
