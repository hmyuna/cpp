#include <stdio.h>
#include <string.h>
struct String{
	char v[6];
};
String morse[27];
char code[1000];
char c;
int len = 0; 
int main(){
	FILE* in;
	in = fopen("in.txt", "r");
	FILE* out;
	out = fopen("out.txt", "w"); 
	strcpy(morse[0].v, ".-");//a
	strcpy(morse[1].v, "-...");//b
	strcpy(morse[2].v, "-.-.");//c
	strcpy(morse[3].v, "-..");//d
	strcpy(morse[4].v, ".");//e
	strcpy(morse[5].v, "..-.");//f
	strcpy(morse[6].v, "--.");//g
	strcpy(morse[7].v, "....");//h
	strcpy(morse[8].v, "..");//i
	strcpy(morse[9].v, ".---");//j
	strcpy(morse[10].v, "-.-");//k
	strcpy(morse[11].v, ".-..");//l
	strcpy(morse[12].v, "--");//m
	strcpy(morse[13].v, "-.");//n
	strcpy(morse[14].v, "---");//o
	strcpy(morse[15].v, ".--.");//p
	strcpy(morse[16].v, "--.-");//q
	strcpy(morse[17].v, ".-");//r
	strcpy(morse[18].v, "...");//s
	strcpy(morse[19].v, "-");//t
	strcpy(morse[20].v, "..-");//u
	strcpy(morse[21].v, "...-");//v
	strcpy(morse[22].v, ".--");//w
	strcpy(morse[23].v, "-..-");//x
	strcpy(morse[24].v, "-.--");//y
	strcpy(morse[25].v, "--..");//z
	while(fscanf(in, "%c", &c) != -1){
		if(c >= 'A' && c <= 'Z'){
            c += 32;
        }
		code[len++] = c;
	}
	fprintf(out, "%c", '/');
	for(int i = 0;i < len;i++){
		if(code[i] >= 'a' && code[i] <= 'z')
		fprintf(out, "%s/", morse[(int)code[i] - 'a'].v);
		else{
		fprintf(out, "%c/", code[i]);	
		}
	}
	fclose(in);
	fclose(out);
}
