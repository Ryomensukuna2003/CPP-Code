#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    lln, k;
    cin >> n >> k;
    llarr[n];
    for (lli = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for(lli=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    sort(arr, arr + n);

    llvar1 = (arr[n - 1]) - k;
    if (var1 < 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << var1 << endl;
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
