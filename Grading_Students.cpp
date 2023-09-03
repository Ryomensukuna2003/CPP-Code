#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    lln, val;
    cin >> n;
    ll arr[n];
    for (lli = 0; i < n; i++)
    {
        cin >> arr[i];
        val = 5 - (arr[i] % 5);
        if (arr[i] < 38)
        {
            cout << arr[i] << endl;
        }
        else
        {
            if (val < 3)
            {
                arr[i] = arr[i] + val;
                cout << arr[i] << endl;
            }
            else
            {
                cout << arr[i] << endl;
            }
        }
    }
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
