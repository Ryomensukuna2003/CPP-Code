#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
using namespace  std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll ceilVal1 = (a / c) + ((a % c) != 0) ;
    ll ceilVal2 = (b / c) + ((b % c) != 0) ;
    cout<<ceilVal1*ceilVal2;

    
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}

