#include <iostream>
using namespace std;
int a[1001][3], b[1001][3];
int main()
{
    int n, m, sh = 0, kc = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i][2] >> a[i][1];
    for (int i = 1; i <= m; i++)
        cin >> b[i][2] >> b[i][1];
    int i = 1, j = 1, k = 0, l = 0, pd = -1, js = 0;
    while (i <= n || j <= m) {
        sh += 1 * a[i][2];
        kc += 1 * b[j][2];
        k++;
        l++;
        if (sh > kc) {
            if (pd == 0) {
                js++;
                pd++;
            }
            if (pd == -1)
                pd += 2;
        }
        if (sh < kc) {
            if (pd == 1) {
                js++;
                pd--;
            }
            if (pd == -1)
                pd++;
        }
        if (k == a[i][1]) {
            k = 0;
            i++;
        }
        if (l == b[j][1]) {
            l = 0;
            j++;
        }
    }
    cout << js;
}
