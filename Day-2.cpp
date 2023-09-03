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
    vll vec1;
    forin(n,vec1);
    sort(all(vec1));
    int l=1,r=vec1.size()-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if((vec1[l]+vec1[r]+vec1[i])==0){
                cout<<1<<endl;
                return;
            }
            else if((vec1[l]+vec1[r]+vec1[i])>0) l++;
            
            else break;
            
        }
    }
    cout<<0<<endl;
    return;
}

int main(){
    FAST;
    ll t=1;
    while(t--){
        solve();
}
return 0;
}
