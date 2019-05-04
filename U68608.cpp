#include <bits/stdc++.h>
using namespace std;
int n, L, G;
int main()
{
	cin >> n >> L >> G;
	for (int _ = 1; _ <= n; _++)
	{
		int w, h;
		cin >> w >> h;
		while (w > G || h > G)
		{
			w /= 2;
			h /= 2;
		}
		if (w < L || h < L)
			cout << "Too Young" << endl;
		else if (w >= L && h >= L && w != h)
			cout << "Too Simple" << endl;
		else
			cout << "Sometimes Naive" << endl;
	}
	return 0;
}