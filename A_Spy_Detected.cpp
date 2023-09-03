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
    int n;cin>>n;
    vll vec1,vec2;
    int val;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    vec2=vec1;
    sort(all(vec2));
    for(int i=0;i<n-1;i++){
        if(vec2[i]==vec2[i+1]){
            val=vec2[i];
        }
    }
    for(int i=0;i<n;i++){
        if(vec1[i]!=val){
            cout<<i+1<<endl;
            break;
        }
    }
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
