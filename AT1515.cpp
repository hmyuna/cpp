#include <bits/stdc++.h>
int a, b, c, d;
double a1, a2;
int main()
{
    std::cin >> a >> b >> c >> d;
    a1 = b * 1.0 / a;
    a2 = d * 1.0 / c;
    if (a1 > a2)
    {
        std::cout << "TAKAHASHI" << std::endl;
    }
    else if (a1 == a2)
    {
        std::cout << "DRAW" << std::endl;
    }
    else
    {
        std::cout << "AOKI" << std::endl;
    }
    return 0;
}
