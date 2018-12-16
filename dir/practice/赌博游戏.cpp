#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void putdice(int , int );
int main(){
	srand(time(0));
	int dice = rand() % 11 + 2;
	int last = rand() % 11 + 2;
	putdice(dice, last);
	system("pause");
	return 0;
}
void putdice(int dice, int last){
	switch(dice){
		case 7:case 11:
				printf("%d\n", dice);
				printf("You won.");
				return;
		case 2:case 3:case 12:
				printf("%d\n", dice);
				printf("You lost.");
				return;
		default:
			if(dice == 7){
				printf("%d\n", dice);
				printf("You lost.");
				return;	
			}
			if(last == dice){
				printf("%d\n", dice);
				printf("You won.");
				return;
			}
			last = dice;
			dice = rand() % 11 + 2;
			printf("%d\n", dice);
			putdice(dice, last);
	}
}
