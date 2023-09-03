#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    lla, ctr = 0;
    cin >> a;
    llarr[a];
    for (lli = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    for (lli = 0; i < a; i++)
    {
        if (arr[i] == arr[a - 1])
        {
            ctr++;
        }
    }
    cout << ctr << endl;
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
