#include <bits/stdc++.h>
int T, M, N, K;
#define MAX_NUM 55
int aField[MAX_NUM][MAX_NUM];
int main()
{
	int i, j, t, m, n;
	scanf("%d", &T);
	for (t = 0; t < T; t++) {
		scanf("%d%d%d", &M, &N, &K);
		for (m = 1; m <= M; m++)
			for (n = 1; n <= N; n++)
				scanf("%d", &aField[m][n]);
		int nTotalPeanuts = 0;
		int nTotalTime	= 0;
		int nCuri		  = 0, nCurj;
		while (nTotalTime < K) {
			int nMax = 0, nMaxi, nMaxj;
			for (i = 1; i <= M; i++) {
				for (j = 1; j <= N; j++) {
					if (nMax < aField[i][j]) {
						nMax  = aField[i][j];
						nMaxi = i;
						nMaxj = j;
					}
				}
			}
			if (nMax == 0)
				break;
			if (nCuri == 0)
				nCurj =
					nMaxj;
			{
				nTotalTime += 1 + abs(nMaxi - nCuri) + abs(nMaxj - nCurj);
				nCuri = nMaxi;
				nCurj = nMaxj;
				nTotalPeanuts += aField[nMaxi][nMaxj];
				aField[nMaxi][nMaxj] = 0;
			}
			else break;
		}
		printf("%d\n", nTotalPeanuts);
	}
	return 0;
}