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
    cout<<fixed<<setprecision(10);
    int n,x;cin>>n>>x;
    vll vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.pb(x);
    }
    sort(vec1.rbegin(),vec1.rend());
    float count=0,max_count=0;
    for(int i=0;i<n-1;i++){
        count=vec1[i]-vec1[i+1];
        if(max_count<=count){
            max_count=count;
        }
    }

    double sum1=(1.0*max_count)/2;

    int maxi=2*max(vec1[n-1],x-vec1[0]);
    if(maxi>sum1){
        cout<<(1.0*maxi)/2<<endl;
    }
    else{
        cout<<sum1<<endl;
    }
}

int main(){
    FAST;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
}
return 0;
}
