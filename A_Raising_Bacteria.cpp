#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
#define bpc __builtin_popcount
#define bpcll __builtin_popcountll
void solve()
{
    int n;
    cin >> n;
    // bitset<64> x = n;
    cout<<bpc(n);
    // cout << x.count();
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
