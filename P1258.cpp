#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, s, x;
    cin >> s >> a >> b;
    x = (2 * a * s) / (3 * a + b);
    printf("%.6lf", x / a + (s - x) / b);
    return 0;
}