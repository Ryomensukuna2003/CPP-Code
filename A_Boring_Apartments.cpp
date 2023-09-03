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
    int n;cin>>n;
    vector<int>vec1;
    int val=0;
    while(true){
        if(n<=0){
            break;
        }
        int x=n%10;
        vec1.pb(x);
        n/=10;
    }
    reverse(all(vec1));
    for(int i=1;i<=vec1.size();i++){
        val+=i;
    }
    // for(auto x:vec1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<val<<endl;
    cout<<((vec1[0]-1)*10)+val<<endl;
}
int main(){
        int t=1;
        cin>>t;
        while(t--){
        solve();
}
return 0;
}
