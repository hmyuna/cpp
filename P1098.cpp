#include <bits/stdc++.h>
using namespace std;
int p1, p2, p3;
string a;
bool isNum(char a)
{
	if(a >= '0' && a <= '9') return 1;
	return 0;
}
bool isChar(char a)
{
	if(a >= 'a' && a <= 'z') return 1;
	return 0;
}
int main()
{
	cin >> p1 >> p2 >> p3;
	cin >> a;
	for(int i = 0; i < a.length(); i++)
	{
		if(a[i] == '-')
		{
			if((i != a.length() - 1) && ((isChar(a[i - 1]) && isChar(a[i + 1])) || ((isNum(a[i - 1])) && isNum(a[i + 1]))) && (a[i + 1] - a[i - 1]) > 0)
			{
				if(isChar(a[i - 1])){
					if(p3 == 1)
						for(int j = (int)a[i - 1] + 1; j < (int)a[i + 1]; j++)
						{
							for(int __ = 1; __ <= p2; __++)
								if(p1 == 1) cout << (char) j;
								else if(p1 == 2) cout << (char)(j - 'a' + 'A');
								else cout << '*';
						}
					else
						for(int j = a[i + 1] - 1; j >= (int)a[i - 1] + 1; j--)
						{
							for(int __ = 1; __ <= p2; __++)
								if(p1 == 1) cout << (char) j;
								else if(p1 == 2) cout << (char)(j - 'a' + 'A');
								else cout << '*';
						}
				}else if(isNum(a[i - 1]))
				{
					if(p3 == 1)
						for(int j = (int)a[i - 1] + 1; j < (int)a[i + 1]; j++)
						{
							for(int __ = 1; __ <= p2; __++)
								if(p1 != 3) cout << (char)j;
								else cout << '*';
						}
					else
						for(int j = a[i + 1] - 1; j >= (int)a[i - 1] + 1; j--)
						{
							for(int __ = 1; __ <= p2; __++)
								if(p1 != 3) cout << (char)j;
								else cout << '*';
						}
				}
			}else
			{
				cout << '-';
			}
		}else
		{
			cout << a[i];
		}
	}
	return 0;
}