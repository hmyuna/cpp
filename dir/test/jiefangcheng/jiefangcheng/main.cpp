#include<iostream>

using namespace std;

int main()

{

	float x, k, b, h;

	cout << "一元一次方程形如 'kx+b=h'" << endl << "请输入k,b,h" << endl;

	cin >> k >> b >> h;
	
	if (k == 0)
	{
		cout << 0 << endl;
	}
	x = (h - b) / k;

	cout << "结果为" << x << endl;

	system("pause");

	return 0;

}