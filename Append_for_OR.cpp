#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    ll n,k;cin>>n>>k;
    ll value;
    ll count=0;
    ll ans =0;
    vector<ll>vec1;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        vec1.push_back(x);
    }
    if(n==1){
        for(ll i=0;i<=k;i++){
            if((vec1[0]|i)==k){
                ans=i;
                count++;
                break;
            }
        }
    }
    else{
        value = vec1[0]|vec1[1];

        for(ll i=2;i<vec1.size();i++){
            value=value|vec1[i];
        }
        // cout<<value<<endl;

        for(ll i=0;i<=k;i++){
            if((value|i)==k){
                ans=i;
                count++;
                break;
            }
        }
    }
    
    if(count>0){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }








    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
