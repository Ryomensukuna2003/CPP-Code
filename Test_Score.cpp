#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    lla, b, c;
    cin >> a >> b >> c;
    if (c == 0)
    {
        cout << "YES" << endl;
    }
    else if (b > c)
    {
        cout << "NO" << endl;
    }
    else
    {
        if ((b % 2 == 0 && c % 2 == 0) || (b % 2 != 0 && c % 2 != 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
llmain()
{
    llt;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
