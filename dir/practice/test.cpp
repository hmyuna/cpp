#include <stdio.h>
int main(){
	double w, h;
	scanf("%lf %lf", &w, &h);
	double bmi = w / (h * h);
	if(bmi < 18.5){
		printf("Thin.");
	}else if(bmi > 23.9){
		printf("Fat.");
	}else{
		printf("Normal.");
	}
	return 0;
}
