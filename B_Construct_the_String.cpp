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
    int n,x,y;cin>>n>>x>>y;
    vector<char> vec1{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; //26;
    vector<char> vec2;
    for(int i=0;i<n/y;i++){
        for(int j=0;j<y;j++){
            vec2.pb(vec1[j]);
        }
    }
    for(int i=0;i<n%y;i++){
        vec2.pb(vec1[i]);
    }

    for(auto x:vec2){
        cout<<x;
    }
    cout<<endl;
    
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
