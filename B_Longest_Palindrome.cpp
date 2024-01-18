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
    string s;cin>>s;
    int n=s.size();
    int count=0,max_count=0;
    vector<char>vec1;
    vector<char>vec2;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            vec1.push_back(s[j]);
            vec2.push_back(s[j]);
            // forout(vec1);cout<<" ";forout(vec2);cout<<endl;
            reverse(all(vec2));
            if(vec1==vec2){
                count=vec1.size();
                max_count=max(count,max_count);
            }
            reverse(all(vec2));
        }
        vec1.clear();
        vec2.clear();
    }
    cout<<max_count<<endl;
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
