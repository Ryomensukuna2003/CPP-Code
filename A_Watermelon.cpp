#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a;
    cin >> a;
    if (a % 2 == 0 && a != 2)
    {
        cout << 'YES' << endl;
    }
    else
    {
        cout << 'NO' << endl;
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
