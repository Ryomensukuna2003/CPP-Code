#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

//                                「本 物 の 柔 術 を 見 せ て や る」

#define vll vector<long long int>
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a<b){
        swap(a,b);
    }
    // a is greater;
    ll sub=abs(a-b);
    ll sum1=(sub*x)+(b*y);
    ll sum2=(sub*x)+(2*b*x);
   
    if(sum1<sum2){
        cout<<sum1<<endl;
    }
    else{
        cout<<sum2<<endl;
    }

}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
