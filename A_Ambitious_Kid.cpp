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
    if(n==1){
        int temp;cin>>temp;
        cout<<abs(temp)<<endl;
        return;
    }
    vll vec1,vec2;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>=0){
            vec1.push_back(x);
        }
        else{
            vec2.pb(x);
        }
    }
    if(vec1.size()==0){
        cout<<abs(*max_element(all(vec2)));
        return;
    }
    else if(vec2.size()==0){
        cout<<*min_element(all(kvec1));
        return;
    }
    int mini=*min_element(all(vec1));
    int maxi=abs(*max_element(all(vec2)));

    if(mini>=maxi){
        cout<<maxi<<endl;
    }
    else{
        cout<<mini<<endl;
    }

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
