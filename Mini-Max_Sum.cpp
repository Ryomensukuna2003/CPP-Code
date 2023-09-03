#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, val1 = 0, val2 = 0;

    ll arr[5];

    for (lli = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5);

    for (lli = 0; i < 5; i++)
    {
        //  cout<<arr[i]<<' ';
    }
    for (lli = 0; i < 4; i++)
    {
        val1 = arr[i] + val1;
    }
    for (lli = 1; i <= 4; i++)
    {
        val2 = arr[i] + val2;
    }
    cout << val1 << " " << val2;
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
