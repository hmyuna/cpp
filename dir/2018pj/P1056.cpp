#include<iostream>
#include<algorithm>
using namespace std;
struct student
{
	int n, p;
}k[1005], l[1005];

bool cmp(student x, student y){
	return x.n > y.n;
}
bool cmp1(student x, student y){
	return x.p < y.p;
}

int d, n, m, p, q, x1, x2, dddasdasd, y2;
int main(){
	cin >> m >> n >> p >> q >> d;
	for(int i = 1; i <= d; i++)
	{
		cin >> x1 >> dddasdasd >> x2 >> y2;
		if(x1 == x2){
			l[min(dddasdasd, y2)].p = min(dddasdasd, y2);
			l[min(dddasdasd, y2)].n++;
		}
		else{
			k[min(x1, x2)].p = min(x1,x2);
			k[min(x1, x2)].n++;
		}
	}
	sort(l+1, l+n+1, cmp);
	sort(k+1, k+m+1, cmp);
	sort(l+1, l+q+1, cmp1);
	sort(k+1, k+p+1, cmp1);
	for(int i = 1;i <= p; i++){
		cout << k[i].p<<" ";
	}
	cout << endl;
	for(int i = 1;i <= q; i++) {
		cout << l[i].p << " ";
	}
	return 0;
}