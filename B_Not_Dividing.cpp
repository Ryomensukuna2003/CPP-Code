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

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

void solve()
{
    ll n;cin>>n;
    vll vec1;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        vec1.pb(x);
    }
    
    for(int i=0;i<n;i++){
        if(vec1[i]==1){
            vec1[i]++;
        }
    }
    for(ll i=1;i<n;i++){
        if(vec1[i]%vec1[i-1]==0){
            vec1[i]+=1;
        }
    }
    
    for(auto x:vec1){
        cout<<x<<" ";
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
