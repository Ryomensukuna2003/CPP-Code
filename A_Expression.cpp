#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = a * b * c;
    ll y = (a + b) * c;
    ll z = a * (b + c);
    ll p = a + b * c;
    ll q = a * b + c;
    ll r = a+b+c;
    vector<int> vec1;
    vec1.push_back(x);
    vec1.push_back(y);
    vec1.push_back(z);
    vec1.push_back(p);
    vec1.push_back(q);
    vec1.push_back(r);
    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    cout << *max_element(vec1.begin(), vec1.end());
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
