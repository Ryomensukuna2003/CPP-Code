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
    int n,a,b;cin>>n;
    map<ll,ll>m1;
    int count=0;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        if(b==1){
            break;
        }
        if(i==0){
            count=(b/2)-1;
        }
        m1.insert(pair<int,int>(a,b));
    }
    int ans=0;
    int temp=0;
    for(auto &x:m1){
        if(temp==0){
            ans=x.first;
            temp++;
        }
        // if(x.second==1){
        //     break;
        // }
        int val=ceil(x.second/2)-1;
        if(x.first+val<count){
            // cout<<count<<" "<<x.first+val<<endl;
            count-=(count-(x.first+val));
        }
    }
    cout<<ans+count<<" "<<ans<<" "<<count<<endl;
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

