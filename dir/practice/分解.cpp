//分解质因数
#include <stdio.h>
#include <stdlib.h>
int main(){
	int k = 2;
	int n;
	int first = 0;
	scanf("%d", &n);
	printf("%d = ", n);
	while(n != 1){
		if((n % k) == 0){
			if(!first){
				first = 1;
				printf("%d", k);
			}else{
				printf(" * %d", k);
			}
			n /= k;
		}else{
			k++;
		}
	}
	system("pause");
	return 0;
} 
