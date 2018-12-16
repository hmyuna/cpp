#include <stdio.h>
#include "string.h"
#include <math.h>
#include <time.h>
#define LL long long
int main (){
	int i;
	char name[20];
	int a, b;
	scanf("%d", &i);
	sprintf(name, "%din.txt", i);
	freopen(name, "r", stdin);
	freopen("input.txt", "w", stdout);
	scanf("%d%d", &a, &b);
	printf("%d %d", a, b);
	return 0;
}

