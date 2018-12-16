#include <bits/stdc++.h>
using namespace std;
char last;
int a, b;
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == (int)'a' || a == (int)'b' || a == (int)'c')
        {
            last = a;
            cin >> a >> b;
        }else{
            cin >> b;
        }
        if (last == 'a')
        {
            printf("%d+%d=%d\n", a, b, a + b);
        }
        else if (last == 'b')
        {
            printf("%d-%d=%d\n", a, b, a - b);
        }
        else
        {
            printf("%d*%d=%d\n", a, b, a * b);
        }
    }
}