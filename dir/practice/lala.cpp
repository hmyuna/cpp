#include <copy.h>
#include <stdio.h>
int main(){
	char out[100];
	char in[100];
	scanf("%s%s", &in, &out);
	copy(in, out);
}
