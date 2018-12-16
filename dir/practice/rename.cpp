#include <stdio.h>
#include <stdlib.h>
int main()
{
	char oldn[80];
	scanf("%s", &oldn);
	if (remove(oldn) == 0){
		printf("Removed %s.\n", oldn);
	}
	else{
		perror("remove");
		system("pause");
	}
	return 0;
};

