#include <bits/stdc++.h>
using namespace std;
int n, i, e, t;
char _;
int MIN(int a, int b, int c, int d){
    return min(min(min(a, b), c), d);
}
int main()
{
    while (cin >> _)
    {

        switch (_)
        {
        case 'n':
            n++;
            break;
        case 'i':
            i++;
            break;
        case 'e':
            e++;
            break;
        case 't':
            t++;
            break;
        default:
            break;
        }
    }
    cout << MIN((n - 1) / 2, e / 3, i, t) << endl;
    return 0;
}