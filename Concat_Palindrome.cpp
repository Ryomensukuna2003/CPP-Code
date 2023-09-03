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
    int a,b;cin>>a>>b;
    string x,y;cin>>x>>y;
    string z=x+y;
    sort(all(z));
    bool istrue=false;
    vll vec1;
    int count=0,max_count=0;
    for(int i=0;i<a+b-1;i++){
        if(z[i]==z[i+1]){
            count++;
        }
        if(z[i]!=z[i+1]){
            vec1.pb(count+1);
            count=0;
            istrue=true;
        }
    }
    if(!istrue){
        vec1.pb(count+1);
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
