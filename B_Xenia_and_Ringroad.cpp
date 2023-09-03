#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
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
    
    ll n,s;cin>>n>>s;
    vll vec1;
    ll sum=0;
    for(ll i=0;i<s;i++){
        ll x;cin>>x;
        vec1.pb(x);
    }
    sum+=vec1[0]-1;
    for(ll i=1;i<s;i++){
        if(vec1[i-1]==vec1[i]){
            continue;
        }
        else if(vec1[i-1]>vec1[i]){
            sum+=(n-vec1[i-1]);
            sum+=vec1[i];
        }
        else{
            sum+=abs(vec1[i-1]-vec1[i]);
        }
    }
    cout<<sum<<endl;
}

int main(){
    FAST;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}
