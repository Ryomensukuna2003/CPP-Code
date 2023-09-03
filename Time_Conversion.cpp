#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a;
    cin >> a;
    string hrs = a.substr(0, 2);
    string min = a.substr(3, 2);
    string sec = a.substr(6, 2);
    string ver = a.substr(8, 2);
    llnewhrs = stoi(hrs);
    if (ver == "PM")
    {
        if (hrs != "12")
            newhrs += 12;
        if (newhrs == 24)
            newhrs = 0;
        // newhrs=newhrs%12;
        if (newhrs < 10)
            cout << '0' << newhrs << ':' << min << ':' << sec;
        else
            cout << newhrs << ':' << min << ':' << sec;
    }
    else
    {
        if (newhrs == 12)
            hrs = "00";
        cout << hrs << ':' << min << ':' << sec;
    }

    // cout<<num1<<":"<<x<<y<<":"<<z<<p<<endl;
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
