#include<stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
	char name[100];
    FILE *fp;
    printf("Name:");	
	scanf("%s", &name);
    fp = fopen(name,"rb");
    char c;
    while(fscanf(fp,"%c",&c)!=-1){
		printf("%c",c);
	}
    printf("\nTime used %.2fs\n", (double)clock() / CLOCKS_PER_SEC);
	fclose(fp);
    return 0;
}
