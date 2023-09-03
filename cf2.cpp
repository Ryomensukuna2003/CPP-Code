#include <bits/stdc++.h>
#define vll vector<long long>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    vll temp(n + 1);
    for (ll i = 0; i < n; i++)
        temp[a[i]] = i + 1;
    for (ll i = 1; i <= n; i++)
        cout << temp[i] << ' ';
    cout << endl;
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
