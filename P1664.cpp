#include<bits/stdc++.h>
using namespace std;
int n, t = 0, a, d = 0, m = 0;
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a == 1)
        {
            if(m > 0) d -= 1 << (m - 1);
            if(d < 0) d = 0;
            t++;
			d++;
			m = 0;
            if(d >= 3) t++;
            if(d >= 7) t++;
            if(d >= 30) t++;
            if(d >= 120) t++;
            if(d >= 365) t++;
        }else if(a == 0) m++;
    }
    printf("%d", t);
    return 0;
}
