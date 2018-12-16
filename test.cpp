#include <bits/stdc++.h>
using namespace std;
char buf[1 << 21], *p1 = buf, *p2 = buf;
inline int getc()
{
    return p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 1 << 21, stdin), p1 == p2) ? EOF : *p1++;
}
template <typename T>inline void redi(T &ret)
{
    int f = 0;
    char ch = getc();
    while (!isdigit(ch))
    {
        if (ch == '-')
            f = 1;
        ch = getc();
    }
    while (isdigit(ch))
    {
        ret = ret * 10 + ch - 48;
        ch = getc();
    }
}
template <typename T,typenadame... Args> inline void redi(T& t, Args&... args)
{
    redi(t);redi(args...);
}
int n, k;
int a[1000001];
int main()
{
    redi(n, k);
    for(int i = 1; i <= n; i++){
        redi(a[i]);
    }
    cout << (double)clock() / CLOCKS_PER_SEC << endl;
    return 0;
}