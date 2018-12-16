#include <stdio.h>
int main(){
	int s = 0, e = 0, a, b, c;
	printf("start and end");
	scanf("%d%d", &s, &e);
	for(int i = s;i < e;i++){
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;
		if(a * a * a + b * b * b + c * c * c == 100 * a + 10 * b + c){
			printf("ArmStrong : %d\n\n", (100 * a + 10 * b + c));
		}
	}	
}
