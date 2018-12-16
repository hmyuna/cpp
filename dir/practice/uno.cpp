#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
const int ALL = 0;
const int RED = 1;
const int YELLOW = 2;
const int BLUE = 3;
const int GREEN = 4;
int i;
int win;
char laststrcolour[10];
int len = 7;
typedef struct {
		int colour;
		int num;
		int type;
		int hind;
		char strColour[10];
	}Uno;
Uno getUno(int hind){
	Uno uno;
	uno.colour = (int)rand() % 5;
	uno.num = (int)rand() % 10;
	uno.hind = hind;
	switch(uno.colour){
		case RED:
			strcpy(uno.strColour, "red");
			break;
		case BLUE:
			strcpy(uno.strColour, "blue");
			break;
		case YELLOW:
			strcpy(uno.strColour, "yellow");
			break;
		case GREEN:
			strcpy(uno.strColour, "green");
			break;
		default:
			strcpy(uno.strColour, "all");
			break;
	}
	if(uno.colour == ALL){
		uno.type = 1;
	}else{
		uno.type = 0;
	}
	return uno;
}
Uno last = getUno(0);
int lastcolour = last.colour;
int main(){
	system("title Uno! 接龙，数字或颜色；All可以接所有颜色");
	int chupai = 0;
	srand(time(NULL));
	typedef struct{
		Uno pai[1000];
	}Player;
	Player player;
	for(i = 0;i < 1000;i++){
		if(i < len)
		player.pai[i] = getUno(0);
		else
		player.pai[i] = getUno(1);
	}
	do{
		printf("您有牌:\n\n");
		for(i = 0;i < 1000;i++){
			if(!player.pai[i].hind){
			printf("%d：{colour：%s;num：%d}\n\n", i, player.pai[i].strColour, player.pai[i].num);
			}
		}
		printf("上一张：{colour：%s;num：%d}\n\n",last.strColour, last.num);
		strcpy(laststrcolour, last.strColour);
		printf("出牌:\"-1\"代表摸牌");		
		do{
		scanf("%d", &chupai);
		}while((chupai >= len || player.pai[chupai].hind));
		if(chupai == -1){
			for(i = 0;i < 1000;i++){
				if(player.pai[i].hind){
					player.pai[i] = getUno(0);
					break;
				}
			}
		}else if(player.pai[chupai].colour == last.colour || player.pai[chupai].num == last.num || player.pai[chupai].type == 1){
			player.pai[chupai].hind = 1;
			last = player.pai[chupai];
			if(player.pai[chupai].type == 1){
				strcpy(last.strColour, laststrcolour);
				last.colour = lastcolour;
			}else{
				strcpy(laststrcolour, last.strColour);
				lastcolour = last.colour;
			}
		}
		system("cls");
		win = 1;
		for(i = 0;i < 1000;i++){
			if(player.pai[i].hind == 0){
				win = 0;
				break;
			}
		}
	}while(!win);
	printf("恭喜出完！");
	system("pause");
	return 0;
}
