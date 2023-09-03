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

void solve()
{
    int n;cin>>n;
    vll vec1;
    forin(n,vec1);
    int l=0,r=vec1.size()-1,count=0,max_count=0;
    while(l<r){
        count=(min(vec1[l],vec1[r])*(r-l));
        max_count=max(count,max_count);
        if(vec1[l]<vec1[r]){
            l++;
        }
        else{
            r--;
        }
    }
    cout<<max_count<<endl;
}

int main(){
    FAST;
    ll t=1;
    while(t--){
        solve();
}
return 0;
}
