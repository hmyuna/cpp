#include <stdio.h>
int main(){
	int l;
	scanf("%d", &l);
	int t = l - 1;
	for(int i = 0; i <= l; i++){
		for(int j = 0; j <= t; j++){
			printf(" ");
			
		}
		for(int k = 0; k < 2 * i - 1; k++){
			printf("*");
		}
		printf("\n");
		t -= 1;
	}
	return 0;
}
