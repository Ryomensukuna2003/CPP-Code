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
    string s1;cin>>s1;
    vll vec1,vec2,vec3;
    int ctr1=0,ctr2=0;
    for(int i=0;i<n;i++){
        vec1.pb(s1[i]-48);
    }
    // forout(vec1);cout<<endl;
    vec2.pb(0);
    vec3.pb(1);

    for(int i=1;i<n;i++){
        vec2.pb(vec2[i-1]^vec1[i-1]);
    }
    for(int i=1;i<n;i++){
        vec3.pb(vec3[i-1]^vec1[i-1]);
    }

    for(int i=0;i<n;i++){
        if(vec2[i]==1){
            ctr1++;
        }
        if(vec3[i]==1){
            ctr2++;
        }
    }
    cout<<max(ctr1,ctr2)<<endl;
    // forout(vec2);cout<<endl;
    // forout(vec3);cout<<endl<<endl;

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
