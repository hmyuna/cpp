#include <bits/stdc++.h>
using namespace std;
double A, B, C, D;
double f(double t)
{
	return A * t * t * t + B * t * t + C * t + D;
}
int main()
{
	cin >> A >> B >> C >> D;
	for (int i = -100; i <= 100; i++)
	{
		double l = i, r = i + 1;
		double x1 = f(l);
		double x2 = f(r);
		if (x1 == 0)
		{
			printf("%.2lf ", l);
		}
		if (x1 * x2 < 0)
		{
			while (r - l >= 0.001)
			{
				double m = (l + r) / 2.0;
				if (f(m) * f(r) <= 0)
				{
					l = m;
				}
				else
				{
					r = m;
				}	
			}
			printf("%.2lf ", r);
		}
	}
	return 0;
}