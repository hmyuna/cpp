#include <bits/stdc++.h>
const int SIZE = 120;
int matrix[SIZE + 1][SIZE + 1];
int rowsum[SIZE + 1][SIZE + 1];
int m, i, j, first, last, area, ans;
int main()
{
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &matrix[i][j]);
	ans = matrix[0][0];
	for (i = 1; i <= m; i++)
		rowsum[i][0] = 0;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= m; j++)
			rowsum[i][j] = rowsum[i][j - 1] + matrix[i][j];
	for (first = 1; first <= m; first++)
		for (last = first; last <= m; last++)
		{
			area = 0;
			for (i = 1; i <= m; i++)
			{
				area += rowsum[i][last] - rowsum[i][first - 1];
				if (area > ans)
					ans = area;
				if (area < 0)
					area = 0;
			}
		}
	printf("%d\n", ans);
	return 0;
}