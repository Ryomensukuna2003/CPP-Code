#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool comp(string &a, string &b)
{
    if (a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}
void solve()
{
    lln;
    cin >> n;
    vector<string> arr(n);
    for (lli = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), comp);
    for (lli = 0; i < n; i++)
    {
        cout << arr[i] << endl;
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
