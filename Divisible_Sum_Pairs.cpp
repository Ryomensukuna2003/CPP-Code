#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    lln, k, ctr = 0;
    cin >> n >> k;
    llarr[n];
    for (lli = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (lli = 0; i < n; i++)
    {
        for (llj = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) % k == 0)
            {
                ctr++;
            }
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
