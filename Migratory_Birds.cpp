#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    lln, ctr = 0;
    cin >> n;

    llarr[n];
    for (lli = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (lli = 0; i < n; i++)
    {
        if (arr[i] == a[i + 1])
        {
            ctr++;
            i++;
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
