#include <bits/stdc++.h>
using namespace std;
int t[10001];
char str[10000 + 1];
int main()
{
    memset(t, 0, sizeof(t));
    while (cin >> (str + 1))
    {
        for (int i = 1; i <= strlen(str + 1); i++){
            t[str[i]]++;
        }
    }
    int max_cnt = 0;
    for (int i = 'A'; i <= 'Z'; i++)
    {
        max_cnt = max(max_cnt, t[i]);
    }
    for (int i = max_cnt; i > 0; i--)
    {
        for (char c = 'A'; c <= 'Z'; c++)
        {
            if (t[c] >= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        putchar('\n');
    }

    for (char c = 'A'; c < 'Z'; c++)
    {
        printf("%c ", c);
    }
    printf("Z");
    return 0;
}