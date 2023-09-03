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
    int a;cin>>a;
    int ans=a%4;
    if(a==0){
        cout<<1<<endl;
    }
    else if(ans==1){
        cout<<8<<endl;
    }
    else if(ans==2){
        cout<<4<<endl;
    }
    else if(ans==3){
        cout<<2<<endl;
    }
    else{
        cout<<6<<endl;
    }

}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}
