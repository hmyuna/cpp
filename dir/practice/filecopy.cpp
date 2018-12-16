//filecopy
#include <stdio.h>
int main(){
	FILE* in;
	FILE* out;
	char pathin[80], pathout[80];
	char c;
	char val[9999];
	scanf("%s", &pathin);
	scanf("%s", &pathout);
	in = fopen(pathin, "rb");
	out = fopen(pathout, "wb");
	while(fscanf(in, "%c", &c) != -1){
		fprintf(out, "%c", c);
	}
	return 0;
}
