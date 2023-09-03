#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    lla, ctr;
    cin >> a;
    // string stri = to_string(a);
    // //lls=a.size();
    // for(lli=0;i<stri.size();i++){
    //     if(stri[i]=='4'){
    //         ctr++;
    //     }
    // 77467308734/10
    // }
    lln = a;
    llans = 0;
    while (n > 0)
    {
        llc = n % 10;
        if (c == 4)
            ans++;
        n = n / 10;
    }
    cout << ans << endl;
}
llmain()
{
    llt = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
