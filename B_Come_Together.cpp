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
    ll x1,x2,y1,y2,z1,z2,s1=0,s2=0;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    if((x1<y1 && x1<z1) || (x1>y1 && x1>z1)){
        s1=min(abs(y1-x1),abs(z1-x1));
    }
    if((x2<y2 && x2<z2) || (x2>y2 && x2>z2)){
        s2=min(abs(y2-x2),abs(z2-x2));
    }
    cout<<s1+s2+1<<endl;
    

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
