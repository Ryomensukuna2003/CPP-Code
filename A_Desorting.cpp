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
    cout<<fixed<<endl;
    cout<<setprecision(0);
    ll n;cin>>n;
    vll vec1;
    forin(n,vec1);
    ll diff,max_diff=INT_MAX;
    for(ll i=0;i<n-1;i++){
        diff=(vec1[i+1]-vec1[i]);
        if(max_diff>diff){
            max_diff=diff;
        }
    }
    if(max_diff<0){
        cout<<0<<endl;
    }
    else if(max_diff==0){
        cout<<1<<endl;
    }
    else{
        if(max_diff%2==0){
            cout<<(max_diff/2)+1<<endl;  
        }
        else{
            cout<<ceil((max_diff*1.0)/2)<<endl;
        }
        // cout<<max_diff<<endl;
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
