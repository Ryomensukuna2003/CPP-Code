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
    int n;cin>>n;
    string a;cin>>a;
    sort(all(a));
    cout<<a<<endl;
    vll vec1;
    int count=0,maxcount=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            count++;
        }
        if(count>=maxcount){
            maxcount=count;
        }
        if(a[i]!=a[i+1]){
            vec1.pb(maxcount+1);
            count=0;
            maxcount=0;
        }
    }
    int val1=0,val2=0;
    for(int i=0;i<vec1.size();i++){
        if(vec1[i]>1){
            val1++;
        }
    }
    for(int i=0;i<vec1.size();i++){
        if(vec1[i]=1){
            val2++;
        }
    }
    cout<<val1<<" "<<val2<<endl;
    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
}

int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solve();
}
return 0;
}
