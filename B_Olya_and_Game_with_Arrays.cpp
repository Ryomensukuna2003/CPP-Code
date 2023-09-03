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

bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}


void solve()
{
    int n;cin>>n;
    vll temp1,temp2;
    for(int i=0;i<n;i++){
        int m;cin>>m;
        vll vec1;
        for(int i=0;i<m;i++){
            int x;cin>>x;
            vec1.pb(x);
        }
        sort(all(vec1));
        temp1.pb(vec1[0]);
        temp2.pb(vec1[1]);
    }
    sort(all(temp1));
    int ans=(accumulate(all(temp2),0)-temp2[0])+temp1[0];
    cout<<ans<<endl;
    // for(auto x:temp1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(auto x:temp2){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    
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
