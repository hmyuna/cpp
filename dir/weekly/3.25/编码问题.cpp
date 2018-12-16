#include <bits/stdc++.h>
//#define scanf scanf_s
using namespace std;
int q[10005];//问题数组（a)
int w[10005];//解（b)
int used[10005];
int main()
{
	int m, n, i, j;
	char a, b, c;//变量
	while (~scanf("%d", &m))//输入
	{
		memset(w, 0, sizeof(w));
		memset(used, 0, sizeof(used));
		scanf("%c%*%*", &a);
		if (a == 'A')
		{
			scanf("%d", &q[1]);
			for (i = 2; i <= m; i++)
				scanf(",%d", &q[i]);//输入
			cin >> b;
			for (i = 1; i <= m; i++)
				for (j = 1; j < i; j++)
				{
					if (q[i] > q[j])
						w[i]++;//统计个数
				}
			printf("B=(");
			cout << w[1];
			for (i = 2; i <= m; i++)
				printf(",%d", w[i]);
			printf(")\n");//输出
		}
		else if (a == 'B')//另一种情况
		{
			scanf("%d", &w[1]);
			for (i = 2; i <= m; i++)
				scanf(",%d", &w[i]);
			cin >> b;//输入
			int s;
			memset(used, 0, sizeof(used));
			for (i = m; i >= 1; i--)
			{
				s = 0;//当前数字
				for (j = 0; j < m; j++)
				{
					if (s == w[i] && !used[j])//s为输入且j已未用过
					{
						q[i] = j;//解为j
						used[j] = 1;//标记
						break;
					}
					if (!used[j])
						s++;
				}
			}
			printf("A=(");
			cout << q[1];
			for (i = 2; i <= m; i++)
				printf(",%d", q[i]);
			printf(")\n");//输出
		}
	}
	return 0;
}
