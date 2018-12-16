/*sort.cpp*/
#include <stdio.h>
void swaper(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int sort(int *a, int len, int (*is_big) (int , int )) {
	int t = 0;
	for(int i = 0; i < len; i++) {
		for(int j = i + 1; j < len; j++) {
			if(!is_big(a[i], a[j])) {
				swaper(&a[i], &a[j]);
			}
		}
	}
	return 0;
}
int bigger(int a, int b) {
	if(a > b)
		return 1;
	return 0;
}
int main() {
	int l = 0;
	scanf("%d", &l);
	int a[l];
	for(int i = 0; i < l; i++){
		scanf("%d", &a[i]);
	}
	sort(a, l, bigger);
	for(int i = 0; i < l; i++)
		printf("%d : %d\n", i + 1, a[i]);
}
