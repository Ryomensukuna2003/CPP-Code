#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll s, t, a, b, m, n, apple = 0, orange = 0;
    // input part
    cin >> s >> t >> a >> b >> m >> n;
    ll arr1[m], arr2[n];
    for (lli = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    for (lli = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    for (lli = 0; i < m; i++)
    {
        if (a + arr1[i] >= s && a + arr1[i] <= t)
        {
            apple++;
        }
    }
    for (lli = 0; i < n; i++)
    {
        if (b + arr2[i] >= s && b + arr2[i] <= t)
        {
            orange++;
        }
    }

    cout << apple << endl;
    cout << orange << endl;
}
llmain()
{
    llt = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
