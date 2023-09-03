#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define mod 1000000007
void solve()
{
    int n,x;cin>>n>>x;
    if(n<2){
        cout<<1<<endl;
    }
    else{
        n-=2;
        cout<<(ceil(1.0*n/x)+1)<<endl;
    }
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
