#include <bits/stdc++.h>
using namespace std;
string a, b, c;
char m[101];
int ma[101], mb[101];
int main()
{
	cin >> a >> b >> c;
	if (a.size() != b.size() || a.size() < 26)
	{
		cout << "Failed" << endl;
		return 0;
	}
	for (int i = 0; i < a.size(); i++)
	{
		ma[a[i]]++;
		mb[b[i]]++;
		if ((m[a[i]] >= 'A' && m[a[i]] <= 'Z') && m[a[i]] != b[i])
		{
			cout << "Failed" << endl;
			return 0;
		}
		if (m[a[i]] >= 'A' || m[a[i]] <= 'Z')
		{
			m[a[i]] = b[i];
		}
		else
		{
			cout << "Failed" << endl;
			return 0;
		}
	}
	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (m[i] < 'A' || m[i] > 'Z' || ma[i] != mb[m[i]])
		{
			cout << "Failed" << endl;
			return 0;
		}
	}
	for (int i = 0; i < c.size(); i++)
	{
		cout << (char)m[c[i]];
	}
	cout << endl;
	return 0;
}
// AAQWERTYUIOPLKJHGFDSAZXCVBNM
// ABQWERTYUIOPLKJHGFDSAZXCVBNM
// HELLO