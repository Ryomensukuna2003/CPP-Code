#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
using namespace  std;
 
//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
#define all(x)   (x).begin(), (x).end()
#define mod      1000000007
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(int i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;

ll sum(vector<ll>& vec1, ll mid) {
    ll ans=0;
    for (int i=0;i<vec1.size();i++) {
        if (vec1[i] < mid) ans+=(mid-vec1[i]);
    }
    return ans;
}

void solve() {
    ll n, x;cin>>n>>x;
    vll vec1;
    forin(n,vec1);
    ll l = 0;
    ll r = 10000000000;

    while (l<=r) {
        ll mid=(l+r)/2;
        ll ans=sum(vec1, mid);

        if (ans==x) {
            cout << mid << endl;
            return;
        } 
        else if (ans < x) l = mid + 1;
        else r = mid - 1;
        
    }
    cout<<r<< endl;
}

int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
