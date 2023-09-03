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
    ll n;cin>>n;
    ll count=0;
    ll negetive=0;
    ll zero=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x==1){
            continue;
        }
        else if(x==0){
            count++;
            zero++;
        }
        else if(x<0){
            count+=(-1*x)+1;
            negetive++;
        }
        else{
            count+=(x-1);
        }
    }
    if(negetive%2==0){
        negetive/=2;
    }
    else if(negetive%2!=0 && zero%2!=0){
        cout<<count-(negetive*2)<<endl;
        return;
    }
    else if(negetive%2==0 && zero%2!=0){
        cout<<count-(negetive*2)<<endl;
        return;
    }
    else if(negetive%2!=0 && zero%2==0 && zero!=0){
        cout<<count-(negetive*2)<<endl;
        return;
    }
    else{
        negetive/=2;
    }
    cout<<count-(negetive*4)<<endl;
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


