#include <bits/stdc++.h>
using namespace std;
int k;
string s, Draw[10] = {"-|| ||-", "  |  | ", "- |-| -",
				   "- |- |-", " ||- | ", "-| - |-", "-| -||-",
				   "- |  | ", "-||-||-", "-||- |-"};
int main()
{
	cin >> k >> s;
	for (int p = 0; p < 7; p++)
	{
		if (p == 2 || p == 5)
			continue;
		if (p % 3 == 0)
		{
			for (int i = 0; i < s.size(); i++)
			{
				cout << ' ';
				for (int j = 0; j < k; j++)
				{
					cout << Draw[s[i] - 48][p];
				}
				cout << "  ";
			}
			cout << endl;
		}
		else
		{
			for (int q = 0; q < k; q++)
			{
				for (int i = 0; i < s.size(); i++)
				{
					cout << Draw[s[i] - 48][p];
					for (int j = 1; j < k; j++)
					{
						cout << ' ';
					}
					cout << Draw[s[i] - 48][p + 1] << ' ';
				}
				cout << endl;
			}
		}
	}
	return 0;
}