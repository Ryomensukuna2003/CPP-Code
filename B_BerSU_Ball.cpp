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
    int x;cin>>x;
    vll vec1,vec2;
    forin(x,vec1);
    int y;cin>>y;
    forin(y,vec2);
    sort(all(vec1));
    sort(all(vec2));  
    if(x>y){
        swap(vec1,vec2);
    }
    
    // forout(vec1);cout<<endl;
    // forout(vec2);cout<<endl;
    int count=0;
    int a=0;
    for(int i=0;i<min(x,y);i++){
        for(int j=a;j<max(x,y);j++){
            if(vec1[i]==vec2[j] || abs(vec1[i]-vec2[j])==1){
                // cout<<i<<" "<<j<<endl;
                count++;
                a=j+1;
                // cout<<a<<endl;
                break;
            }
            
        }
    }
    cout<<count<<endl;
}

int main(){
    FAST;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
}
return 0;
}
