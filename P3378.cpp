#include <bits/stdc++.h>
using namespace std;
priority_queue <int, vector <int>, greater<int> > q;
int n;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int opt;
        cin >> opt;
        if(opt == 1)
        {
            int x;
            cin >> x;
            q.push(x);
        }else if(opt == 2)
        {
            cout << q.top() << endl;
        }else
        {
            q.pop();
        }
        
    }
    return 0;
}